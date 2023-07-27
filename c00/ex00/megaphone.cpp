// Copyright 2023 Vanderson Antonietti

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:40:27 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/27 19:57:07 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string uppercase(char **str, int a) {
  std::string res;
  std::string tmp;
  for (int i = 1; i < a; i++) {
    tmp = str[i];
    for (int j = 0; j < static_cast<int> (tmp.length()); j++)
      res += static_cast<char> (toupper(tmp[j]));
  }
  return (res);
}

int main(int argc, char **argv) {
  std::string capitalized;

  if (argc == 1)
    std::cout << "* LOUD UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else
    capitalized = uppercase(argv, argc);
  std::cout << capitalized << std::endl;
  return (0);
}
