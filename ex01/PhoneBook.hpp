/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:16:45 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 16:38:04 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(const Contact &contact);
    private:
        Contact contacts [8];
        int next;
};

#endif