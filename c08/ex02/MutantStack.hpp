/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:44:39 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/06 18:51:53 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <stack>
# include <deque>
# include <list>

// Macros
# define RESET		"\e[m"
# define RED		"\e[31m"
# define GREEN		"\e[32m"
# define YELLOW		"\e[33m"

template <typename T>

class MutantStack : public std::stack<T> {
public:
  MutantStack() : std::stack<T>() {};
  MutantStack(const MutantStack &copy) : std::stack<T>(copy) {};
  MutantStack &operator=(const MutantStack &copy) {
    if (this != &copy) {
      std::stack<T>::operator=(copy);
    }
    return *this;
  };
  ~MutantStack() {};

  typedef typename std::stack<T>::container_type::iterator iterator;

  iterator begin() {
    return std::stack<T>::c.begin();
  };
  iterator end() {
    return std::stack<T>::c.end();
  };
};

#endif