/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 01:55:25 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/07 16:16:13 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv ) {
  if (argc < 2) {
    std::cout << "Usage: ./PmergeMe <int1> <int2> <int3> <int4> <intn...>" << std::endl;
    return (1);
  }
  try {
    PmergeMe::mergeVector(argv);
    PmergeMe::mergeDeque(argv);
  }
  catch(const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  return 0;
}