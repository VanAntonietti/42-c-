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
#include "PhoneBook.hpp"
#include "Contact.hpp"

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main() {
    PhoneBook phonebook;

    while(true) {
        string  input;
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
            cout << "Enter phone number: ";
            getline(cin, contact.phoneNumber);
            cout << "Enter contact darkest secret: ";
            getline(cin, contact.darkestSecret);
            phonebook.addContact(contact);
            
        } else if (input == "SEARCH") {
            phonebook.displayContacts();
            int index;
            cout << "Enter the index number you want to display: ";
            cin >> index;
            cin.ignore();
            Contact contact;
            if (phonebook.getContact(index, contact)) {
                contact.display();
            } else {
                cout << "Invalid index." << endl;
            }
        } else if (input == "EXIT") {
            break;
        }
    }
    return 0;
}
