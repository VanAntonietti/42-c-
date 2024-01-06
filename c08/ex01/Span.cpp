/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:06:59 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/06 18:23:22 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

  Span::Span() : _maxSize(0), _vec(0) {}

  Span::Span(unsigned int n) : _maxSize(n) {}

  Span::Span(const Span &other) : _maxSize(other._maxSize), _vec(other._vec) {}

  Span &Span::operator=(const Span& other) {
    if (this != &other) {
      _maxSize = other._maxSize;
      _vec = other._vec;
    }
    return *this;
  }

  Span::~Span() {}

  void Span::addNumber(int number) {
    if (_vec.size() >= _maxSize) {
      throw std::runtime_error("Vector is full, cannot add more numbers");
    }
    _vec.push_back(number);
  }

  void Span::addVec(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    size_t available_space = _maxSize - _vec.size();
    size_t input_size = std::distance(begin, end);

    if (input_size > available_space) {
      throw std::runtime_error("Not enough space to add numbers");
    }
    _vec.insert(_vec.end(), begin, end);
  }

  int Span::shortestSpan() const {
    if (_vec.size() <= 1) {
      throw std::runtime_error("Cannot find span with less than 2 numbers");
    }
    std::vector<int> sorted_vec = _vec;
    std::sort(sorted_vec.begin(), sorted_vec.end());

    int min_span = sorted_vec[1] - sorted_vec[0];
    for (size_t i = 2; i < sorted_vec.size(); ++i) {
      int span = sorted_vec[i] - sorted_vec[i - 1];
      if(span < min_span) {
        min_span = span;
      }
    }
    return min_span;
  }

  int Span::longestSpan() const {
    if (_vec.size() <= 1) {
      throw std::runtime_error("Cannot find span with less than 2 numbers");
    }
    return *std::max_element(_vec.begin(), _vec.end()) - (*std::min_element(_vec.begin(), _vec.end()));
  }