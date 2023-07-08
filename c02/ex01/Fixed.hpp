/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:54:34 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/04 16:50:49 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
    explicit Fixed(const int fixed);
    int toInt() const;
    explicit Fixed(const float fixed);
    int toFloat() const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif //  FIXED_HPP