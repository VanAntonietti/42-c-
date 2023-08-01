/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:41:57 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 19:28:08 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

  const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
  }
  
  const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
  }

  const char *AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
  }

  AForm::AForm() : _name("default"), _ifSigned(false), _gradeToSign(150), _gradeRequired(150) {
    std::cout << "Default constructor called" << std::endl;
  }

  AForm::AForm(const AForm& other) : _name("default"), _ifSigned(false), _gradeToSign(150), _gradeRequired(150){
    std::cout << "AForm copy constructor called." << std::endl;
    *this = other;
  }

  AForm& AForm::operator=(const AForm& other) {
    std::cout << "AForm copy assigment operator called." << std::endl;
    if (this == &other)
      return *this;
    const_cast<std::string&> (this->_name) = other.getName();
    _ifSigned = getIfSigned();
    const_cast<int&> (this->_gradeToSign)= getGradeToSign();
    const_cast<int&>(this->_gradeRequired) = getGradeRequired();
    return *this;
  }

  AForm::~AForm() {
    std::cout << "Default destructor called." << std::endl;
  }

  AForm::AForm(const std::string &name, const int _gradeToSign, const int _gradeRequired) : _name(name), _ifSigned(false), _gradeToSign(_gradeToSign), _gradeRequired(_gradeRequired) {
    if (_gradeToSign < 1 || _gradeRequired < 1)
      throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeRequired > 150)
      throw GradeTooLowException();
  }

  std::string AForm::getName() const{
    return _name;
  }

  bool AForm::getIfSigned() const {
    return _ifSigned;
  }

  int AForm::getGradeToSign() const {
    return _gradeToSign;
  }

  int AForm::getGradeRequired() const {
    return _gradeRequired;
  }

  void AForm::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
      throw GradeTooLowException();
    this->_ifSigned = true;
  }

  std::ostream& operator<<(std::ostream& os, const AForm &form) {
    os << form.getName() << ", bureaucrat grade ";
    return os;
  }