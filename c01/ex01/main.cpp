/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:25:22 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 21:51:04 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "zombieHorde.cpp"

int main() {
  int hordeSize = 5;
  std::string zombieName = "Tormod";
  Zombie **horde = zombieHorde(hordeSize, zombieName);

  for(int i = 0; i < hordeSize; i++) {
    horde[i]->announce();
  }

  deleteZombieHorde(horde, hordeSize);

  return 0;
}
