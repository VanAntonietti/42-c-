/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:16:45 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 17:24:55 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

using std::string;

#include <iostream>

class Contact {
    public:
        string name;
        string surName;
        string nickName;
        string phoneNumber;
        void display() const;
        // ~Contact();
};

#endif