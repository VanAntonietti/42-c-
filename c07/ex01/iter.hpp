/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:01:53 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 21:08:19 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &)) {
  for (size_t i = 0; i < length; i++) {
    f(array[i]);
  }
}

template <typename T>
void print(T const &x) {
  std::cout << x << std::endl;
}

template <typename T>
void even(T const &x) {
  if (x % 2 == 0) {
    std::cout << x << std::endl;
  }
}


#endif