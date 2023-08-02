/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:06:05 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 19:18:15 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data {
  public:
    Data();
    Data(std::string name, double len, int weight);
    Data(const Data &other);
    Data &operator=(const Data &other);
    ~Data();
    std::string getName();
    double  getLen();
    int  getweight();
    void setLen(double len);
    void setweight(int weight);
    void setName(std::string name);
    double calcIMC();
  private:
    std::string _name;
    double _len;
    int _weight;
  
};

#endif