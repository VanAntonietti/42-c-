// Copyright 2023 Vanderson Antonietti

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:10:06 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 22:54:34 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

std::string toUpperCase(const std::string& str) {
  std::string upperStr = str;
  for (size_t i = 0; i < upperStr.length(); ++i) {
    if (upperStr[i] >= 'a' && upperStr[i] <= 'z') {
      upperStr[i] = static_cast<char>(upperStr[i] - 'a' + 'A');
    }
  }
  return upperStr;
}

int main() {
  PhoneBook phonebook;
  std::string command;
  int maxAvailable = 1000;
  while (true) {
    std::cout << "Enter command (ADD, SEARCH, EXIT): ";
    std::cin >> command;
    command = toUpperCase(command);
    if (command == "ADD") {
      std::string fName, lName, nick, phone, secret;
      std::cout << "Enter First Name: ";
      std::cin >> fName;
      std::cout << "Enter Last Name: ";
      std::cin >> lName;
      std::cout << "Enter Nickname: ";
      std::cin >> nick;
      std::cout << "Enter Phone Number: ";
      std::cin >> phone;
      std::cout << "Enter Darkest Secret: ";
      std::cin >> secret;
      if (!fName.empty() && !lName.empty() && !nick.empty() && !phone.empty() && !secret.empty()) {
        Contact newContact(fName, lName, nick, phone, secret);
        phonebook.addContact(newContact);
        std::cout << "Contact added successfully." << std::endl;
      } else {
        std::cout << "Contact fields cannot be empty. Please try again." << std::endl;
        }
    } else if (command == "SEARCH") {
        phonebook.search();
       } else if (command == "EXIT") {
          break;
        } else {
          std::cout << "Invalid command. Please try again." << std::endl;
        }
    std::cin.clear();
    std::cin.ignore(maxAvailable, '\n');
  }
  return 0;
}
