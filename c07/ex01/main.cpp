/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:06:00 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 21:17:50 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
  int a[9] = {50, 56, 83, 90, 103, 110, 120, 131, 14};
  char b[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
  double c[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
  
  std::cout << "Array of int" << std::endl;
  ::iter(a, 9, print);
  ::iter(a, 9, even);
  std::cout << "Array of char" << std::endl;
  ::iter(b, 9, print);
  ::iter(b, 9, even);
  std::cout << "Array of Float" << std::endl;
  ::iter(c, 9, print);
  return 0;
}