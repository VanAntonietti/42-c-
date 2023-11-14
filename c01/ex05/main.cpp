/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:10:17 by vantonie          #+#    #+#             */
/*   Updated: 2023/11/14 18:43:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main () {
  Harl harl;

  harl.complain("debug");
  std::cout << std::endl;
  harl.complain("info");
  std::cout << std::endl;
  harl.complain("warning");
  std::cout << std::endl;
  harl.complain("error");
  std::cout << std::endl;

  return 0;
}