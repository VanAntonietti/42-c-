/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:17:45 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 23:41:00 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

  HumanB::HumanB(std::string name) : _name(name) {}

  void HumanB::attack() {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
  }

  void HumanB::setWeapon(Weapon &weapon) {
    this-> _weapon = &weapon;
  }

  HumanB::~HumanB() {}