/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:34:37 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 20:36:21 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

  Cat::Cat() {
    std::cout << "Cat default constructor called." << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
  }

  Cat::Cat(const Cat& other) {
    std::cout << "Cat copy constructor called." << std::endl;
    this->_brain = new Brain();
    *this = other;
  }

  Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assigment operator called." << std::endl;
    if (this != &other)
      this->_type = other._type;
    return *this;
  }

  Cat::~Cat() {
    std::cout << "Cat default constructor called." << std::endl;
    delete _brain;
  }

  void Cat::makeSound() const {
    std::cout << "Miau!!!!" << std::endl;;
  }