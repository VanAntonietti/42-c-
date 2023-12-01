/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:32:38 by vantonie          #+#    #+#             */
/*   Updated: 2023/12/01 16:29:05 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

  ScavTrap::ScavTrap() : ClapTrap("Default") {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor called for ScavTrap" << std::endl;
  }

  ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Constructor called for ScavTrap:" << this->_name << std::endl;
  }

  ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "Copy constructor called for ScavTrap: " << this->_name << std::endl;
  }

  ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
      ClapTrap::operator=(other);
    }
    std::cout << "Copy assigment opertator called for ScavTrap: " << this->_name << std::endl;
  return *this;
  }

  ScavTrap::~ScavTrap() {
    std::cout << "Destructor called for ScavTrap: " << this->_name << std::endl;
  }

  void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Getekeeper mode." << std::endl;
  }