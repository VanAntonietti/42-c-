// Copyright 2023 Vanderson Antonietti

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:16:45 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/27 20:51:12 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C00_EX01_HEADER_PHONEBOOK_H_
#define C00_EX01_HEADER_PHONEBOOK_H_

#include "Contact.hpp"

class PhoneBook {
 public:
  PhoneBook();
  void addContact(const Contact &contact);
  void displayContacts() const;
  bool getContact(int index, Contact &contact) const;
  ~PhoneBook();
 private:
  Contact contacts[8];
  int next;
};

#endif  // C00_EX01_HEADER_PHONEBOOK_H_
