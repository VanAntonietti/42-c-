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

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook() {}

PhoneBook::PhoneBook() : numContacts(0), startIndex(0), oldest(0) {}

void PhoneBook::addContact(const Contact& newContact) {
  if (numContacts < maxContacts) {
    contacts[numContacts++] = newContact;
    std::cout << "Contact added." << std::endl;
    } else {
        contacts[oldest] = newContact;
        oldest = (oldest + 1) % maxContacts;
        std::cout << "Contact added and oldest contact replaced." << std::endl;
    }
}

void PhoneBook::search() const {
  int maxAvailable = 1000;
  if (numContacts == 0) {
    std::cout << "Phonebook is empty. No contacts to display." << std::endl;
    return;
  }
  std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
    << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
  std::cout << std::string(41, '-') << std::endl;
  for (int i = 0; i < numContacts; ++i) {
    std::cout << std::setw(10) << i << "|" << std::setw(10) << truncateText(contacts[i].getFirstName()) << "|"
      << std::setw(10) << truncateText(contacts[i].getLastName()) << "|" << std::setw(10) << truncateText(contacts[i].getNickname()) << std::endl;
  }
  std::cout << "Enter the index of the contact to display: ";
  int index;
  while (true) {
    std::cin >> index;
    if (!std::cin || index < 0 || index >= numContacts) {
      std::cout << "Invalid input. Enter a valid index (0 to " << numContacts - 1 << "): ";
      std::cin.clear();
      std::cin.ignore(maxAvailable, '\n');
      continue;
    } else {
      contacts[index].display();
      break;
    }
  }
}

std::string PhoneBook::truncateText(const std::string& text) const {
  if (text.length() <= 10) {
    return text;
  } else {
      return text.substr(0, 9) + ".";
    }
}