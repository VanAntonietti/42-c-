/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:34:37 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 20:39:39 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

  Dog::Dog() {
    std::cout << "Dog default constructor called." << std::endl;\
    this->_type = "Dog";
    this->_brain = new Brain;
  }

  Dog::Dog(const Dog& other) {
    std::cout << "Dog copy constructor called." << std::endl;
    this->_brain = new Brain();
    *this = other;
  }

  Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assigment operator called." << std::endl;
    if (this != &other)
      this->_type = other._type;
    return *this;
  }

  Dog::~Dog() {
    std::cout << "Dog default constructor called." << std::endl;;
    delete _brain;
  }

  void Dog::makeSound() const {
    std::cout << "Woof!!!!" << std::endl;;
  }