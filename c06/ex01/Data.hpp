/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:06:05 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 00:21:22 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data {
  public:
    Data();
    Data(std::string name, int len, int height);
    Data(const Data &other);
    Data &operator=(const Data &other);
    ~Data();
    std::string getName();
    int  getLen();
    int  getHeight();
    void setLen(int len);
    void setHeight(int height);
    void setName(std::string name);
    double calcIMC();
  private:
    std::string _name;
    int _len;
    int _height;
  
};

#endif