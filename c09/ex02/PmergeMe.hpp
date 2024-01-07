/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 01:55:38 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/07 16:26:41 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <ctime>

class PmergeMe {
  private:
    PmergeMe(void);
    PmergeMe(PmergeMe const &src);
    ~PmergeMe(void);
    PmergeMe  &operator=(PmergeMe const &rhs);
  public:
    static std::vector<std::pair<int,int> > _vector;
    static std::deque<std::pair<int,int> > _deque;
    static void mergeDeque(char **input);
    static void mergeVector(char **input);
};

#endif