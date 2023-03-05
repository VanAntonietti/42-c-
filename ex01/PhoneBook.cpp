/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:16:50 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 17:08:50 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

using std::cout;
using std::endl;

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