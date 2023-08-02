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

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <sstream>

class PhoneBook {
  private:
    static const int maxContacts = 8;
    Contact contacts[maxContacts];
    int numContacts;
    int startIndex;
    int oldest;
    std::string truncateText(const std::string& text) const;
  public:
    PhoneBook();
    void addContact(const Contact& newContact);
    void search() const;
    ~PhoneBook();
};

#endif // PHONEBOOK_HPP