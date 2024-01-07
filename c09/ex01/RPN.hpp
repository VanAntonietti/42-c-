/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 03:41:25 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/07 03:42:26 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
#define RNP_HPP

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>

class RPN {
  private:
    std::string _expression;
    std::stack <double> _stack;
  public:
    RPN();
    ~RPN();
    RPN(const RPN &copy);
    RPN &operator=(const RPN &op);
    explicit RPN(std::string expression);
    std::string get_expression(void) const;
    double calculate(void);
};

#endif