/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:10:30 by vantonie          #+#    #+#             */
/*   Updated: 2023/11/14 18:39:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

  std::string Harl::levels[4] = {
    "debug",
    "info",
    "warning",
    "error"
  };

  Harl::Harl() {}

  void Harl::complain(std::string level) {
    complains complains[4] = {
      &Harl::_debug,
      &Harl::_info,
      &Harl::_warning,
      &Harl::_error,
    };
    for (int i = 0; i < 4; i++)
      if (this->levels[i] == level)
        (this->*(complains[i]))();
  }

  Harl::~Harl() {}

  void Harl::_debug(void) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
  }

  void Harl::_info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
  }

  void Harl::_warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
  }

  void Harl::_error(void) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
  }

