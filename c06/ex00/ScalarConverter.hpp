/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:13:30 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 23:55:37 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATICCONVERTER_HPP
# define STATICCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <math.h>
#include <stdlib.h>

typedef enum {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID
}         e_type;

class ScalarConverter {
  public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    ~ScalarConverter();

    static void convert(std::string literal);
    static e_type getType(std::string literal);
  private:
    static std::string _literal;
    static e_type _type;
    static void _print_c(char c);
    static void _print_i(int i);
    static void _print_f(float f);
    static void _print_d(double d);
};

#endif