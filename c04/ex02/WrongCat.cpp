/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:34:37 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 18:27:56 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

  WrongCat::WrongCat() {
    std::cout << "WrongCat default constructor called." << std::endl;
    this->_type = "WrongCat";
  }

  WrongCat::WrongCat(const WrongCat& other) {
    std::cout << "WrongCat copy constructor called." << std::endl;
    *this = other;
  }

  WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "WrongCat copy assigment operator called." << std::endl;
    if (this != &other)
      this->_type = other._type;
    return *this;
  }

  WrongCat::~WrongCat() {
    std::cout << "WrongCat default constructor called." << std::endl;;
  }

  void WrongCat::makeSound() const {
    std::cout << "Miau!!!!" << std::endl;;
  }