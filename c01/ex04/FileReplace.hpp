/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 00:10:27 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/29 20:23:24 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <string>
#include <fstream>
#include <iostream>

class FileReplace {
  private:
    std::string _filename;
    std::string _str1;
    std::string _str2;
  public:
    FileReplace(std::string filename, std::string str1, std::string str2);
    void replace();
    ~FileReplace();
};

#endif //  FILEREPLACE_HPP