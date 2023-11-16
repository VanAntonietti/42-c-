/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:18:44 by vantonie          #+#    #+#             */
/*   Updated: 2023/11/16 19:16:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->name = name;
  this->hitPoints = 10;
  this->energyPoints = 10;
  this->attackDamage = 0;
  std::cout << "Name constructor called for" << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
  name = other.name;
  attackDamage = other.attackDamage;
  energyPoints = other.energyPoints;
  hitPoints = other.hitPoints;
  std::cout << "Copy constructor called for" << name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if(this != &other) {
    name = other.name;
    attackDamage = other.attackDamage;
    energyPoints = other.energyPoints;
    hitPoints = other.hitPoints;
    }
  std::cout << "Copy assigment operator called for" << other.name << std::endl;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "Default destructor called for" << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if(hitPoints <=0 || energyPoints <= 0)
    std::cout << "There are not enough resources for" << name << ", please buy another EA DLC to recover." << std::endl;
  std::cout << name << " attacks " << target << " and deals " << attackDamage << " damage." << std::endl;
  energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if(hitPoints <= 0)
    std::cout << "Can't take more damage," << name << "has already gone to the Borderlands." << std::endl;
  std::cout << name << " takes " << amount << " damage." << std::endl;
  hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if(hitPoints <= 0)
    std::cout << "This Claptrap can´t be repared anymore, it already gone to Belieze" << std::endl;
  std::cout << "ClapTrap" << name << "uses" << amount << "to recover" << amount << "hit points" << std::endl;
  hitPoints += amount;
  energyPoints -= amount;
}
