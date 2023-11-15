/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:54:26 by vantonie          #+#    #+#             */
/*   Updated: 2023/11/15 17:56:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::eight = 8;

  Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
  }

  Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
  }

  Fixed &Fixed::operator = (const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed.getRawBits());
    return(*this);
  }

  Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
  }

  int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
  }

  void Fixed::setRawBits(int const raw) {
    this->value = raw;
    return;
  }