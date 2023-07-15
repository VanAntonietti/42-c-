/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:08:54 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 20:50:16 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

  AAnimal::AAnimal() {
    std::cout << "Animal default constructor called." << std::endl;
    this->_type = "Animal";
  }

  AAnimal::AAnimal(const AAnimal& other) {
    std::cout << "Animal copy constructor called." << std::endl;
    *this = other;
  }

  AAnimal& AAnimal::operator=(const AAnimal& other) {
    std::cout << "Animal copy assigment operator called." << std::endl;
    if (this != &other)
      this->_type = other._type;
    return *this;
  }

  AAnimal::~AAnimal() {
    std::cout << "Animal default destructor called." << std::endl;
  }

  void AAnimal::makeSound() const {
    std::cout << "This animal haven't decide what it is, wait it decide." << std::endl;
  }

  std::string AAnimal::getType() const {
    return (this->_type);
  }

std::ostream &operator<<(std::ostream &o, AAnimal const &other) {
  o << other.getType();
  return o;
}