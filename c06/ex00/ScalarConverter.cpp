/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticConverterScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:20:21 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 23:40:59 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string ScalarConverter::_literal = "";
e_type ScalarConverter::_type = INVALID;

ScalarConverter::ScalarConverter() {
  std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &other) {
    *this = other;
  }
  return *this;
}

ScalarConverter::~ScalarConverter() {
  std::cout << "Destructor called" << std::endl;
}

e_type ScalarConverter::getType(std::string literal) {
  bool isNumeric[3] = {true, true, true};
  bool wasPoint = false;
  bool wasF = false;

  if (literal.length() == 0)
    return INVALID;
  if (!literal.compare("nan") || !literal.compare("+inf") || !literal.compare("-inf") || !literal.compare("inf"))
    return DOUBLE;
  if (!literal.compare("nanf") || !literal.compare("+inff") || !literal.compare("-inff") || !literal.compare("inff"))
    return FLOAT;
  else if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
    return CHAR;
  else if (literal.length() == 1 && !isdigit(literal.c_str()[0]))
    return CHAR;
  for (int a = 0; a < (int )literal.length(); a++) {
    if (!isdigit(literal[a]) && !(a == 0 && (literal[a] == '-' || literal[a] == '+')))
    {
      isNumeric[0] = false;
      if ((literal[a] == '.'|| literal[a] == 'f' ))
      {
        if (literal[a] == '.' && wasPoint == false) 
          wasPoint = true;
        else if (literal[a] == 'f' && wasPoint == true && literal[a - 1] != '.'  && wasF == false) {
          isNumeric[1] = false;
          wasF = true;
        }
        else {
          isNumeric[1] = false;
          isNumeric[2] = false;
          break ;
        }
      }
      else {
        isNumeric[1] = false;
        isNumeric[2] = false;
        break;
      }
    }
  }
  return (isNumeric[0] ? INT : (isNumeric[1] ? DOUBLE : (isNumeric[2] ? FLOAT : INVALID)));
}

void ScalarConverter::_print_c(char c) {
  std::cout << "char: ";
  if (_literal == "-inf" || _literal == "+inf" || _literal == "nan" || _literal == "-inff" || _literal == "+inff" || _literal == "nanf")
    std::cout << "impossible" << std::endl;
  else {
    if (isprint(c))
      std::cout << "'" << c << "'" << std::endl;
    else
      std::cout << "Non displayable" << std::endl;
  }
}

void ScalarConverter::_print_i(int i) {
  std::cout << "int: ";
  if (_literal == "-inf" || _literal == "+inf" || _literal == "nan" || _literal == "-inff" || _literal == "+inff" || _literal == "nanf")
    std::cout << "impossible" << std::endl;
  else
    std::cout << i << std::endl;
}

void ScalarConverter::_print_f(float f) {
  std::cout.precision(2);
  std::cout << "float: ";
  std::cout << std::fixed << f << "f" << std::endl;
}

void ScalarConverter::_print_d(double d) {
  std::cout.precision(2);
  std::cout << "double: ";
  std::cout << std::fixed << d << std::endl;
}

 void ScalarConverter::convert(std::string literal) {
  _type = getType(literal);
  _literal = literal;
  if (_type == CHAR) {
    char  c = _literal.c_str()[0];
    if (_literal.length() == 3 && _literal.c_str()[0] == '\'' && _literal.c_str()[2] == '\'')
      c = _literal.c_str()[1];
    _print_c(c);
    _print_i(static_cast<int>(c));
    _print_f(static_cast<float>(c));
    _print_d(static_cast<double>(c));
  }
  else if (_type == INT) {
    int i = atoi(_literal.c_str());
    _print_c(static_cast<char>(i));
    _print_i(i);
    _print_f(static_cast<float>(i));
    _print_d(static_cast<double>(i));
  }
  else if (_type == FLOAT) {
    float f = strtof(_literal.c_str(), NULL);
    _print_c(static_cast<char>(f));
    _print_i(static_cast<int>(f));
    _print_f(f);
    _print_d(static_cast<double>(f));
  }
  else if (_type == DOUBLE) {
    double d = strtod(_literal.c_str(), NULL);
    _print_c(static_cast<char>(d));
    _print_i(static_cast<int>(d));
    _print_f(static_cast<float>(d));
    _print_d(d);
  }
}