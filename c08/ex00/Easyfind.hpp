/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:51:53 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/06 13:19:10 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T& a, int b) {
  typename T::iterator iterator = std::find(a.begin(), a.end(), b);
  if(iterator == a.end() && *iterator != b) {
    throw std::runtime_error("Value not found in container.");
  }
  return iterator;
}

#endif