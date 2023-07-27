// Copyright 2023 Vanderson Antonietti

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:19:13 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 22:55:08 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
  std::cout << "Constructor called." << std::endl;
  return;
}

Contact::~Contact() {
  std::cout << "Destructor called." << std::endl;
  return;
}

void  Contact::display() const {
  std::cout << "Name:" << Contact::name << std::endl;
  std::cout << "Surname:" << Contact::surName << std::endl;
  std::cout << "Nickname:" << Contact::nickName << std::endl;
  std::cout << "Phone Number:" << Contact::phoneNumber << std::endl;
  std::cout << "Contact Darkest Secret:" << Contact::darkestSecret << std::endl;
}

