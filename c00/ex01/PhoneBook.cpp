// Copyright 2023 Vanderson Antonietti

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:16:50 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 23:25:54 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
  std::cout << "Constructor called." << std::endl;
  next = 0;
  return;
}

PhoneBook::~PhoneBook() {
  std::cout << "Phonebook destroyed." << std::endl;
  return;
}

void PhoneBook::addContact(const Contact &contact) {
  if (next < 8) {
    contacts[next++] = contact;
    std::cout << "Contact added." << std::endl;
  } else {
    std::cout << "Phonebook full." << std::endl;
  }
}

void PhoneBook::displayContacts() const {
  std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
  std::cout << "|----------|----------|----------|----------|" << std::endl;
  for (int i = 0; i < next; i++) {
    std::string name = contacts[i].name.substr(0, 10);
    if (name.size() == 10) {
      name.replace(9, 1, ".");
    }
    std::string surName = contacts[i].surName.substr(0, 10);
    if (surName.size() == 10) {
      surName.replace(9, 1, ".");
    }
    std::string nickName = contacts[i].nickName.substr(0, 10);
    if (nickName.size() == 10) {
      nickName.replace(9, 1, ".");
    }
    std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << name <<
      "|" << std::setw(10) << surName << "|" << std::setw(10) <<
      nickName << "|" << std::endl;
  }
}

bool PhoneBook::getContact(int index, Contact &contact) const {
  if (index >= 0 && index < next) {
    contact = contacts[index];
      return true;
  } else {
      return false;
    }
}
