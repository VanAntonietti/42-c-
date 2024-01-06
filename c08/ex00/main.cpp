/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:51:53 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/06 16:18:33 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main () {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.push_back(6);
  vec.push_back(7);
  std::vector<int>::iterator iterator;
  try {
    iterator = easyfind(vec, 1);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
    iterator = easyfind(vec, 2);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
    iterator = easyfind(vec, 3);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
    iterator = easyfind(vec, 4);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
    iterator = easyfind(vec, 5);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
    iterator = easyfind(vec, 6);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
    iterator = easyfind(vec, 7);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
    iterator = easyfind(vec, 8);
    std::cout << "Element:" << *iterator << " found at index: " << std::distance(vec.begin(), iterator) << std::endl;
  }
  catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}