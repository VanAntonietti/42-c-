/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:18:08 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/28 23:24:46 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
  private:
    std::string _name;
    Weapon *_weapon;
  public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &weapon);
    ~HumanB();
};

#endif //  HUMANB_HPP