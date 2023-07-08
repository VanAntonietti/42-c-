/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:54:34 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/04 15:23:29 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int value;
    static const int eight;
  public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed &operator = (const Fixed &fixed);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif //  FIXED_HPP