/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:19:13 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 11:02:05 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string fName, std::string lName, std::string nick, std::string phone, std::string secret): firstName(fName), lastName(lName), nickname(nick), phoneNumber(phone), darkestSecret(secret) {}

void Contact::display() const {
  std::cout << "First Name: " << firstName << std::endl;
  std::cout << "Last Name: " << lastName << std::endl;
  std::cout << "Nickname: " << nickname << std::endl;
  std::cout << "Phone Number: " << phoneNumber << std::endl;
  std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

Contact::~Contact() {}

std::string Contact::getFirstName() const {
  return firstName;
}

std::string Contact::getLastName() const {
  return lastName;
}

std::string Contact::getNickname() const {
  return nickname;
}