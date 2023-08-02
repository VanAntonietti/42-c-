/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:11:13 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 00:29:13 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
  Data *data = new Data("Vanderson", 1.86, 107);
  uintptr_t ptr = Serializer::serialize(data);

  std::cout << "Name: " << data->getName() << std::endl;
  std::cout << "Len: " << data->getLen() << std::endl;
  std::cout << "Height: " << data->getHeight() << std::endl;
  std::cout << "IMC: " << data->calcIMC() << std::endl;
  std::cout << "is storage in :" << data << std::endl;
  std::cout << "the serializer number is:" << ptr<< std::endl;
  std::cout << "the return from the deserializer is:" << Serializer::deserialize(ptr) << std::endl;

  return 0;
}