/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:28:19 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 23:13:06 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
  private:
    std::string _type;
  public:
    Weapon(std::string type);
    const std::string &getType();
    void setType(std::string type);
    ~Weapon();
};

#endif  // WEAPON_HPP