/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:18:44 by vantonie          #+#    #+#             */
/*   Updated: 2023/12/01 17:03:42 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

  ClapTrap::ClapTrap() {
    this->_name = "Clap Trap";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Default constructor called." << std::endl;
  }

ClapTrap::ClapTrap(std::string name) {
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
  std::cout << "Name constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
  this->_name = other._name;
  this->_attackDamage = other._attackDamage;
  this->_energyPoints = other._energyPoints;
  this->_hitPoints = other._hitPoints;
  std::cout << "Copy constructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if(this != &other) {
    this->_name = other._name;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    this->_hitPoints = other._hitPoints;
    }
  std::cout << "Copy assigment operator called for " << this->_name << std::endl;
  return *this;
}

ClapTrap::~ClapTrap(){
  std::cout << "Default destructor called for " << this->_name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if(this->_hitPoints <=0 || this->_energyPoints <= 0)
    std::cout << "There are not enough resources for " << this->_name << ", please buy another EA DLC to recover." << std::endl;
  std::cout << this->_name << " attacks " << target << " and deals " << this->_attackDamage << " damage." << std::endl;
  this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if(this->_hitPoints <= 0)
    std::cout << "Can't take more damage, " << this->_name << " has already gone to the Borderlands." << std::endl;
  else
    std::cout << this->_name << " takes " << amount << " damage." << std::endl;
  this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if(this->_hitPoints <= 0)
    std::cout << "This Scavtrap can't be repared anymore, it is already gone to Belieze" << std::endl;
  else if(amount > this->_energyPoints || this->_energyPoints <= 0)
    std::cout << "Not enough energy" << std::endl;
  else
    std::cout << this->_name << " uses " << amount << " energy points to recover " << amount << " hit points." << std::endl;
  this->_hitPoints += amount;
  this->_energyPoints -= amount;
}
