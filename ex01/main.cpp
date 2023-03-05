/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:10:06 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 17:23:45 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

using std::string;
using std::cout;
using std::cin;

int main() {
    string  input;
    PhoneBook phonebook;
    
    while(true) {
        cout << "Enter a command: ";
        getline(cin, input);
        if (input == "ADD") {
            Contact contact;
            cout << "Enter first name: ";
            getline(cin, contact.name);
            cout << "Enter surname: ";
            getline(cin, contact.surName);
            cout << "Enter nickname: ";
            getline(cin, contact.nickName);
            cout << "Enter phone numer: ";
            getline(cin, contact.phoneNumber);
            phonebook.addContact(contact);
        } else if (input == "SEARCH") {
            //display contact
        } else if (input == "EXIT") {
            break;
        }
    }
    return 0;
}
