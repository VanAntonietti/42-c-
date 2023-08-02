/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:03:09 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 00:24:14 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
  std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy) {
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

Serializer &Serializer::operator=(const Serializer &copy) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &copy) {
    *this = copy;
  }
  return *this;
}

Serializer::~Serializer() {
  std::cout << "Destructor called" << std::endl;
}

  uintptr_t Serializer::serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
  }

  Data* Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
  }