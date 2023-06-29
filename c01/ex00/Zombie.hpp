/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:38:07 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 20:44:06 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define  ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
private:
  std::string name;
public:
  Zombie(std::string name);
  Zombie* newZombie(std::string name);
  void randomChump(std::string name);
  void announce (void);
  ~Zombie();
};

#endif