/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:24:59 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/13 09:45:58 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

  FragTrap::FragTrap() : ClapTrap("Default") {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Default constructor called for FragTrap" << std::endl;
  }

  FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Constructor called for FragTrap " << this->_name << std::endl;
  }

  FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "Copy constructor called for FragTrap " << this->_name << std::endl;
  }

  FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other)
      ClapTrap::operator=(other);
  std::cout << "Copy assigment opertator called for FragTrap " << this->_name << std::endl;
  return *this;
  }


  FragTrap::~FragTrap() {
    std::cout << "Destructor called for FragTrap " << this->_name << std::endl;
  }

  void FragTrap::highFivesGuys() {
    std::cout << this->_name << " request a positive high five!" << std::endl;
  }