/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:32:38 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/03 12:17:57 by vantonie         ###   ########.fr       */
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

  void ScavTrap::attack(const std::string& target) {
  if(this->_hitPoints <=0 || this->_energyPoints <= 0)
    std::cout << "There are not enough resources for " << this->_name << ", please buy another EA DLC to recover." << std::endl;
  std::cout << this->_name << " fiercely attacks " << target << " and deals " << this->_attackDamage << " damage." << std::endl;
  this->_energyPoints--;
}