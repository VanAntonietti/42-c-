/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:19:13 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 17:25:39 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

using std::cout;
using std::endl;

void Contact::display() const {
    cout << "Name:" << Contact::name << endl;
    cout << "Surname:" << Contact::surName << endl;
    cout << "Nickname:" << Contact::nickName << endl;
    cout << "Phone Number:" << Contact::phoneNumber << endl;
}