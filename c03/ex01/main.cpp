/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:56 by vantonie          #+#    #+#             */
/*   Updated: 2023/12/01 16:28:21 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

  std::cout << "ScavTrap Tests" << std::endl;

  ScavTrap scav;
  ScavTrap scav1("ScavTrap 1");
  ScavTrap scav2("ScavTrap 2");

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
  return 0;
}