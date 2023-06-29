/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 00:10:33 by vantonie          #+#    #+#             */
/*   Updated: 2023/06/29 20:24:28 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

FileReplace::FileReplace(std::string filename, std::string str1, std::string str2) : _filename(filename), _str1(str1), _str2(str2) {}

void FileReplace::replace() {
  std::ifstream inputFile(this->_filename);
  if(!inputFile) {
    std::cerr << "Failed to open input file: " << this->_filename << std::endl;
    return;
  }
  std::ofstream outputFile(this->_filename + ".replace");
  if(!outputFile) {
    std::cerr << "Failed to create output file: " << this->_filename << ".replace" << std::endl;
    inputFile.close();
    return;
  }
  std::string line;
  while (std::getline(inputFile, line)) {
    size_t pos = 0;
    while ((pos = line.find(this->_str1, pos)) != std::string::npos) {
      line = line.substr(0, pos) + this->_str2 + line.substr(pos + this->_str1.length());
      pos += this->_str1.length();
    }
    outputFile << line << std::endl;
  }
  inputFile.close();
  outputFile.close();
}

FileReplace::~FileReplace() {}