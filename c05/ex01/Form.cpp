/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:41:57 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 19:24:35 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
  const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
  }
  
  const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
  }

  Form::Form() : _name("default"), _ifSigned(false), _gradeToSign(150), _gradeRequired(150) {
    std::cout << "Default constructor called" << std::endl;
  }

  Form::Form(const Form& other) : _name("default"), _ifSigned(false), _gradeToSign(150), _gradeRequired(150){
    std::cout << "Form copy constructor called." << std::endl;
    *this = other;
  }

  Form& Form::operator=(const Form& other) {
    std::cout << "Form copy assigment operator called." << std::endl;
    if (this == &other)
      return *this;
    const_cast<std::string&> (this->_name) = other.getName();
    _ifSigned = getIfSigned();
    const_cast<int&> (this->_gradeToSign)= getGradeToSign();
    const_cast<int&>(this->_gradeRequired) = getGradeRequired();
    return *this;
  }

  Form::~Form() {
    std::cout << "Default destructor called." << std::endl;
  }

  Form::Form(const std::string &name, const int _gradeToSign, const int _gradeRequired) : _name(name), _ifSigned(false), _gradeToSign(_gradeToSign), _gradeRequired(_gradeRequired) {
    if (_gradeToSign < 1 || _gradeRequired < 1)
      throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeRequired > 150)
      throw GradeTooLowException();
  }

  std::string Form::getName() const{
    return _name;
  }

  bool Form::getIfSigned() const {
    return _ifSigned;
  }

  int Form::getGradeToSign() const {
    return _gradeToSign;
  }

  int Form::getGradeRequired() const {
    return _gradeRequired;
  }

  void Form::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
      throw GradeTooLowException();
    this->_ifSigned = true;
  }

  std::ostream& operator<<(std::ostream& os, const Form &form) {
    os << form.getName() << ", bureaucrat grade " << form.getIfSigned();
    return os;
  }