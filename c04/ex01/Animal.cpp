/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:08:54 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 20:09:50 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

  Animal::Animal() {
    std::cout << "Animal default constructor called." << std::endl;
    this->_type = "Animal";
  }

  Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor called." << std::endl;
    *this = other;
  }

  Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assigment operator called." << std::endl;
    if (this != &other)
      this->_type = other._type;
    return *this;
  }

  Animal::~Animal() {
    std::cout << "Animal default destructor called." << std::endl;
  }

  void Animal::makeSound() const {
    std::cout << "This animal haven't decide what it is, wait it decide." << std::endl;
  }

  std::string Animal::getType() const {
    return (this->_type);
  }

std::ostream &operator<<(std::ostream &o, Animal const &other) {
  o << other.getType();
  return o;
}