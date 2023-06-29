/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:10:19 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/29 20:42:01 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
  private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
    static std::string levels[4];
  public:
    Harl();
    void complain(std::string level);
    ~Harl();
};

typedef void (Harl::*complains)();

#endif //  HARL_HPP