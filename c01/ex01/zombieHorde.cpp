/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:39:08 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 21:46:45 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

void deleteZombieHorde(Zombie **zombie, int n) {
  for(int i = 0; i < n; i++) {
    delete zombie[i];
  }
  delete[] zombie;
}

Zombie **zombieHorde(int n, std::string name) {
  Zombie **zombie = new Zombie*[n];

  for (int i = 0; i < n; i++) {
    zombie[i] = new Zombie(name);
  }

  return zombie;
}