/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:11:14 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 19:19:48 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
  std::cout << "Default constructor called" << std::endl;
}

Data::Data(std::string name, double len, int weight) {
  this->_name = name;
  this->_len = len;
  this->_weight = weight;
}

Data::Data(const Data &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Data &Data::operator=(Data const &other) {
  if (this != &other) {
    this->_name = other._name;
    this->_len = other._len;
    this->_weight = other._weight;
  }
  return *this;
}

Data::~Data() {
  std::cout << "Destructor called" << std::endl;
}

std::string Data::getName() {
  return (this->_name);
}

double Data::getLen() {
  return (this->_len);
}

int Data::getweight() {
  return (this->_weight);
}

void Data::setLen(double len) {
  this->_len = len;
}

void Data::setweight(int weight) {
  this->_weight = weight;
}

void Data::setName(std::string name) {
  this->_name = name;
}

double Data::calcIMC() {
  return (this->_weight / (this->_len * this->_len));
}