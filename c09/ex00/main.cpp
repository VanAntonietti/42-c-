/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 22:27:10 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/07 03:18:29 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


bool checkArgc(const int argc);
int main(int argc, char **argv){
  if(!checkArgc(argc))
    return (1);
  if(!checkFile(argv[1]))
    return(errorMessage("could not open file."));
  BitcoinExchange btc;
  btc.exchange(argv[1]);
  return (0);
}

bool checkArgc(const int argc){
  if(argc != 2)
    return (errorMessage("could not open file.\nUsage: ./btc <file>"));
  return (true);
}
