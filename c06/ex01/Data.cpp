/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:11:14 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 00:20:37 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
  std::cout << "Default constructor called" << std::endl;
}

Data::Data(std::string name, int len, int height) {
  this->_name = name;
  this->_len = len;
  this->_height = height;
}

Data::Data(const Data &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Data &Data::operator=(Data const &other) {
  if (this != &other) {
    this->_name = other._name;
    this->_len = other._len;
    this->_height = other._height;
  }
  return *this;
}

std::string Data::getName() {
  return (this->_name);
}

int Data::getLen() {
  return (this->_len);
}

int Data::getHeight() {
  return (this->_height);
}

void Data::setLen(int len) {
  this->_len = len;
}

void Data::setHeight(int height) {
  this->_height = height;
}

void Data::setName(std::string name) {
  this->_name = name;
}

double Data::calcIMC() {
  return (this->_len / (this->_height * this->_height));
}