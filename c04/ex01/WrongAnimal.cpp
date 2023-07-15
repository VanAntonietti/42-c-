/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:08:54 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 18:29:46 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

  WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called." << std::endl;
    this->_type = "WrongAnimal";
  }

  WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = other;
  }

  WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "WrongAnimal copy assigment operator called." << std::endl;
    if (this != &other)
      this->_type = other._type;
    return *this;
  }

  WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal default destructor called." << std::endl;
  }

  void WrongAnimal::makeSound() const {
    std::cout << "This WrongAnimal haven't decide what it is, wait it decide." << std::endl;
  }

    std::string WrongAnimal::getType() const {
    return (this->_type);
  }

  std::ostream &operator<<(std::ostream &o, WrongAnimal const &other) {
  o << other.getType();
  return o;
}