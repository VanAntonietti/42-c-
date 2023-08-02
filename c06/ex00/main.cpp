/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:11:13 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 23:57:18 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cassert>

#define assertm(exp, msg) assert(((void)msg, exp))


void test_ScalarConverter_get_type(){
    std::cout << "basic Tests\n";
    assertm(ScalarConverter::getType("0") == INT, "ScalarConverter::getType(\"0\") != INT");
    assertm(ScalarConverter::getType("42") == INT, "ScalarConverter::getType(\"42\") != INT");
    assertm(ScalarConverter::getType("42.0") == DOUBLE, "ScalarConverter::getType(\"42.0\") != DOUBLE");
    assertm(ScalarConverter::getType("42.0f") == FLOAT, "ScalarConverter::getType(\"42.0f\") != FLOAT");
    std::cout << "basic Tests OK\n";
    assertm(ScalarConverter::getType("a") == CHAR, "ScalarConverter::getType(\"'a'\") != CHAR");
    std::cout << "Test Invalid\n";
    assertm(ScalarConverter::getType("42.0F") == INVALID, "ScalarConverter::getType(\"42.0F\") != INVALID");
    assertm(ScalarConverter::getType("a") == CHAR, "ScalarConverter::getType(\"a\") != CHAR");
    assertm(ScalarConverter::getType("'as'") == INVALID, "ScalarConverter::getType(\"'as'\") != INVALID");
    assertm(ScalarConverter::getType("42..0f") == INVALID, "ScalarConverter::getType(\"42..0f\") != INVALID");
    assertm(ScalarConverter::getType("42.0ff") == INVALID, "ScalarConverter::getType(\"42.0ff\") != INVALID");
    assertm(ScalarConverter::getType("42.f") == INVALID, "ScalarConverter::getType(\"42.f\") != INVALID");
    assertm(ScalarConverter::getType("") == INVALID, "ScalarConverter::getType(\"\") != INVALID");
    std::cout << "Test Invalid OK\n";
    std::cout << "Test Max\n";
    assertm(ScalarConverter::getType("-42.0f") == FLOAT, "ScalarConverter::getType(\"\") != FLOAT");
    assertm(ScalarConverter::getType("-42") == INT, "ScalarConverter::getType(\"\") != INT");
    assertm(ScalarConverter::getType("nan") == DOUBLE, "ScalarConverter::getType(\"\") != DOUBLE");
    assertm(ScalarConverter::getType("+inf") == DOUBLE, "ScalarConverter::getType(\"\") != DOUBLE");
    std::cout << "Test Max OK\n";
}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        try {
            test_ScalarConverter_get_type();
            std::cout << "All tests passed!\n";
        } catch (std::exception& e) {
            std::cerr << "Error: " << e.what() << '\n';
            return 1;
        }
    }
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <literal>\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
}