/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:10:30 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/29 20:48:16 by vantonie         ###   ########.fr       */
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
    std::cout << "DEBUG: " << std::endl;
  }

  void Harl::_info(void) {
    std::cout << "INFO: " << std::endl;
  }

  void Harl::_warning(void) {
    std::cout << "WARNING: " << std::endl;
  }

  void Harl::_error(void) {
    std::cout << "ERROR: " << std::endl;
  }

