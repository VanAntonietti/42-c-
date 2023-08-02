/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:12:05 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 20:44:45 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
  _grade = grade;
}

Bureaucrat::Bureaucrat() : _name("burecraut"), _grade(150) {
  std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
  std::cout << "Bureaucrat copy constructor called." << std::endl;
  *this=other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  std::cout << "Bureaucrat copy assigment operator called." << std::endl;
  if (this == &other)
    return *this;
  _grade = other._grade;
  return *this;
}

  Bureaucrat::~Bureaucrat(){
    std::cout << "Default destructor called." << std::endl;
  }

  const std::string Bureaucrat::getName() const {
    return _name;
  }

  int Bureaucrat::getGrade() const {
    return _grade;
  }

  void Bureaucrat::incrementGrade() {
    if(_grade == 1)
      throw GradeTooHighException();
    _grade--;
  }

  void Bureaucrat::decrementGrade() {
    if(_grade == 150)
      throw GradeTooLowException();
    _grade++;
  }

  void Bureaucrat::signForm(AForm &form) {
    if (form.getIfSigned() == true) {
      std::cout << _name << " cannot sign " << form.getName() << " because it's already signed." << std::endl;
    }
    else {
      try {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
      }
      catch (std::exception &e) {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
      }
    }
  }

  void Bureaucrat::executeForm(AForm const &form) {
    try {
      form.execute(*this);
      std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
      std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
  }

  std::ostream& operator<<(std::ostream& os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
  }

