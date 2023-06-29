/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:38:04 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/27 22:33:10 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie(void) {
  std::cout << "Entomb! " << this->name << " was destroyed." << std::endl;
} 

void Zombie::announce (void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
