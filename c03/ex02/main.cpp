/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:56 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/13 09:41:55 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "=== Testing ClapTrap ===" << std::endl;
    ClapTrap clapTrap("ClapTrap");
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);

    std::cout << "\n=== Testing ScavTrap ===" << std::endl;
    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("Enemy");
    scavTrap.takeDamage(20);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    std::cout << "\n=== Testing FragTrap ===" << std::endl;
    FragTrap fragTrap("FragTrap");
    fragTrap.attack("Enemy");
    fragTrap.takeDamage(30);
    fragTrap.beRepaired(15);
    fragTrap.highFivesGuys();

    return 0;
}