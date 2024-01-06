/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:06:57 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/06 18:13:40 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

// Macros
# define RESET    "\e[m"
# define RED      "\e[31m"
# define GREEN    "\e[32m"
# define YELLOW   "\e[33m"

class Span {
  private:
    unsigned int _maxSize;
    std::vector<int> _vec;

  public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span& other);
    Span& operator=(const Span& other);
    void addNumber(int number);
    void addVec(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan() const;
    int longestSpan() const;
};

#endif // SPAN_HPP