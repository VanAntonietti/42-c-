/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:12:05 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 18:24:49 by vantonie         ###   ########.fr       */
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
  std::cout << "Default constructor called" << std::endl;
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

  std::ostream& operator<<(std::ostream& os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
  }

