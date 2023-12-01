/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:56 by vantonie          #+#    #+#             */
/*   Updated: 2023/12/01 17:03:09 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

  std::cout << "Clap Trap Tests" << std::endl;

  ClapTrap clap;
  ClapTrap clap1("ClapTrap1");
  ClapTrap clap2("ClapTrap2");

  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);
  clap1.attack("ClapTrap2");
  clap2.takeDamage(0);

  std::cout << std::endl;
  std::cout << "ScavTrap Tests" << std::endl;

  ScavTrap scav;
  ScavTrap scav1("ScavTrap1");
  ScavTrap scav2("ScavTrap2");

  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav2.beRepaired(50);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav2.beRepaired(50);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav1.attack("ScavTrap2");
  scav2.takeDamage(20);
  scav1.guardGate();

  std::cout << std::endl;
  std::cout << "FragTrap Tests" << std::endl;

  FragTrap frag;
  FragTrap frag1("FragTrap 1");
  FragTrap frag2("FragTrap 2");

  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag2.beRepaired(100);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag2.beRepaired(100);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag1.attack("FragTrap2");
  frag2.takeDamage(30);
  frag2.beRepaired(100);
  frag1.highFivesGuys();
  
  return 0;
}