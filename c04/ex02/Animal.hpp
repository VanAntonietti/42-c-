/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:04:10 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 20:48:59 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal {
  protected:
    std::string _type;
  public:
    AAnimal();
    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);
    virtual ~AAnimal();
    virtual void makeSound() const = 0;
    std::string getType() const;
};

std::ostream &operator<<(std::ostream &o, AAnimal const &i);

#endif // ANIMAL_HPP