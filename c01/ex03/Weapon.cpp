/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:33:35 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 23:13:36 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

  Weapon::Weapon(std::string type) : _type(type) {}

  const std::string &Weapon::getType() {
    return(this->_type);
  }

  void Weapon::setType(std::string type) {
    this->_type = type;
  }

  Weapon::~Weapon() {}