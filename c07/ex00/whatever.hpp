/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:01:53 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 21:08:19 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

T max(T const &a, T const &b) {
  return (a > b ? a : b);
}

template <typename T>

T min(T const &a, T const &b) {
  return (a < b ? a : b);
}

template <typename T>

void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

#endif