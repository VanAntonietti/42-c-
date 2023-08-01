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

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
  PhoneBook phonebook;

  while (true) {
    std::string input;
    std::cout << "Enter a command: ";

    getline(std::cin, input);
    if (input == "ADD") {
      Contact contact;
      std::cout << "Enter first name: ";
      getline(std::cin, contact.name);
      std::cout << "Enter surname: ";
      getline(std::cin, contact.surName);
      std::cout << "Enter nickname: ";
      getline(std::cin, contact.nickName);
      std::cout << "Enter phone number: ";
      getline(std::cin, contact.phoneNumber);
      std::cout << "Enter contact darkest secret: ";
      getline(std::cin, contact.darkestSecret);
      phonebook.addContact(contact);
    } else if (input == "SEARCH") {
      phonebook.displayContacts();
      std::string indexInput;
      std::cout << "Enter the index number you want to display: ";
      getline(std::cin, indexInput);
      if(indexInput) {
      }
      int index = std::stoi(indexInput);
      Contact contact;
        if (phonebook.getContact(index, contact)) {
          contact.display();
          } else {
            std::cout << "Invalid index." << std::endl;
          }
      } else if (input == "EXIT") {
        break;
        }
  }
    return 0;
}
