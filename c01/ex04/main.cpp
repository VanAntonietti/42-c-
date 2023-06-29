/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:55:11 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/29 20:24:56 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

int errorCheck(int argc, char **argv) {
  if (argc != 4){
    std::cout << "Wrong number of arguments, use 3." << std::endl;
    return 1;
  }
  return 0;
}

int main(int argc, char **argv) {

  if (errorCheck(argc, argv) != 0)
    return 1;
  FileReplace fileReplace(argv[1], argv[2], argv[3]);
  fileReplace.replace();
  return 0;
}