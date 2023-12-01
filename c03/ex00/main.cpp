/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:56 by vantonie          #+#    #+#             */
/*   Updated: 2023/12/01 17:16:54 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


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
  clap1.beRepaired(0);

  return 0;
}
