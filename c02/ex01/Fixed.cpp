/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:54:26 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/04 17:02:18 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

  int const Fixed::eight = 8;

  Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
  }

  Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
  }

  Fixed &Fixed::operator = (const Fixed &fixed) {
    std::cout << "Copy assigment operator called" << std::endl;
    if(this != &fixed)
      value = fixed.value;
    return(*this);
  }

  Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
  }

  int Fixed::getRawBits() const {
    std::cout << "getRawBits member function valled" << std::endl;
    return(this->value);
  }

  void Fixed::setRawBits(int const raw) {
    this->value = raw;
    return;
  }

  Fixed::Fixed(const int fixed) {
    std::cout << "Int constructor called" << std::endl;
  }

  int Fixed::toInt() const {
    return (this->value >> eight);
  }

  Fixed::Fixed(const float fixed) {
    std::cout << "Float constructor called" << std::endl;
  }

  int Fixed::toFloat() const {
    return(static_cast<float>(this->value) / (1 << eight));
  }

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
  o << i.toFloat();
  return (o);
}