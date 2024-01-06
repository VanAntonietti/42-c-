/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:07:05 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/06 18:42:58 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void subject_test() {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

int main() {
  std::cout << YELLOW << "======== Subject Test ========" << RESET << std::endl;
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  
  std::cout << YELLOW << "======== Exception Test ========" << RESET << std::endl;
  try {
    sp.addNumber(1);
  }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

  std::cout << YELLOW << "======== Random Test ========" << RESET << std::endl;
  Span sp2 = Span(10000);
  std::srand(time(NULL));
  for (int i = 0; i < 10000; i++)
    sp2.addNumber(std::rand() % 10000);
  std::cout << sp2.shortestSpan() << std::endl;
  std::cout << sp2.longestSpan() << std::endl;

  std::cout << YELLOW << "======== Add Vec Test ========" << RESET << std::endl;
  Span sp3 = Span(20000);
  std::vector<int> test{0, 10000, 20000};
  sp3.addVec(test.begin(), test.end());
  std::cout << sp3.shortestSpan() << std::endl;
  std::cout << sp3.longestSpan() << std::endl;
}