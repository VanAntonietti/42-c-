/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:53:54 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 19:57:00 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

  Brain::Brain() {
    std::cout << "Brain default constructor called." << std::endl;
  }

  Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called." << std::endl;
  }

  Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assigment operator called." << std::endl;
    return *this;
  }

  Brain::~Brain() {
    std::cout << "Brain default destructor called." << std::endl;
  }