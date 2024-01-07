/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 03:40:59 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/07 03:53:50 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: ./ex01 \"expression must use Reverse Polish Notation \"" << std::endl;
    return 1;
  }
  try {
    RPN rpn(argv[1]);
    std::cout << rpn.calculate() << std::endl;
  } catch (std::exception &e){
    std::cout << e.what() << std::endl;
    return 1;
  }

  return 0;
}