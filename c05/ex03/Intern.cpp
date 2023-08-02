/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:19:19 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 21:35:49 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
  std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& other) {
  std::cout << "Intern copy constructor called" << std::endl;
  *this = other;
}

Intern& Intern::operator=(const Intern& other) {
  std::cout << "Intern copy assigment operator called" << std::endl;
  if (this == &other)
    return *this;
  return *this;
}

Intern::~Intern() {
  std::cout << "Intern default destructor called" << std::endl;
}

AForm *Intern::createPresidentialPardonForm(std::string target) {
  return new PresidentialPardonForm(target);
}

AForm *Intern::createRobotomyRequestForm(std::string target) {
  return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreationForm(std::string target) {
  return new ShrubberyCreationForm(target);
}

const std::string Intern::_form[3] = {
  "presidential pardon",
  "robotomy request",
  "shrubbery creation"
};

AForm *(*Intern::_createForm[3])(std::string target) = {
  &Intern::createPresidentialPardonForm,
  &Intern::createRobotomyRequestForm,
  &Intern::createShrubberyCreationForm
};

AForm *Intern::makeForm(std::string form, std::string target) {
  for (int i = 0; i < 3; i++) {
    if (form == _form[i]) {
      std::cout << "Intern creates " << form << std::endl;
      return _createForm[i](target);
    }
  }
  std::cout << "Intern can't create " << form << std::endl;
  return NULL;
}