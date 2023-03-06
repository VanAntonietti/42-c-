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

using std::cout;
using std::endl;
using std::setw;

PhoneBook::PhoneBook() {
    next = 0;
}

PhoneBook::~PhoneBook() {
    cout << "Phonebook destroyed." << endl;
}

void PhoneBook::addContact(const Contact &contact) {
    if (next < 8) {
        contacts[next++] = contact;
        cout << "Contact added." << endl;
    } else {
        cout << "Phonebook full." << endl;
    }
}

void PhoneBook::displayContacts() const {
    cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
    cout << "|----------|----------|----------|----------|" << endl;
    for (int i = 0; i < next; i++) {
        string name = contacts[i].name.substr(0,10);
        if (name.size() == 10) {
            name.replace(9,1, ".");
        }
        string surName = contacts[i].surName.substr(0,10);
        if (surName.size() == 10) {
            surName.replace(9,1, ".");
        }
        string nickName = contacts[i].nickName.substr(0,10);
        if (nickName.size() == 10) {
            nickName.replace(9,1, ".");
        }
        cout << "|" << setw(10) << i << "|" << setw(10) << name << "|" << setw(10) << surName << "|" << setw(10) << nickName << "|" << endl;
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