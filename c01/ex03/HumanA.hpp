/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:06:32 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 23:42:48 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
  private:
    std::string _name;
    Weapon &_weapon;
  public:
    HumanA(std::string name, Weapon &weapon);
    void attack();
    ~HumanA();
};

#endif  // HUMANA_H