// Copyright 2023 Vanderson Antonietti

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:16:45 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/05 22:54:03 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
  public:
    Contact();
    std::string name;
    std::string surName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    void display() const;
    ~Contact();
};

#endif  // CONTACT_HPP
