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

#ifndef C00_EX01_HEADER_CONTACT_H_
#define C00_EX01_HEADER_CONTACT_H_

#include <iostream>
#include <string>

using std::string;

class Contact {
 public:
  string name;
  string surName;
  string nickName;
  string phoneNumber;
  string darkestSecret;
  void display() const;
  ~Contact();
};

#endif  // C00_EX01_HEADER_CONTACT_H_
