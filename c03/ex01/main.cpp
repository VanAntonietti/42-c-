/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:56 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/13 09:18:43 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
  ScavTrap clap;
  ScavTrap clap1("Test 1");
  ScavTrap clap2("Test 2");

  clap2.guardGate();

  return 0;
}