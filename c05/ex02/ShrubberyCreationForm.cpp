/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:38:09 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 19:43:52 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

  ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
  }

  ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
  }

  ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = other;
  }

  ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
    if (this != &other) {
      const_cast<std::string&> (this->_target) = other.getTarget();
    }
    return *this;
  }

  ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
  }

  std::string ShrubberyCreationForm::getTarget() const {
    return _target;
  }

  void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (this->getIfSigned() == false)
      throw AForm::FormNotSignedException();
    if (executor.getGrade() >= this->getGradeRequired())
      throw AForm::GradeTooLowException();
    std::ofstream fd;
    fd.open((_target + "_shrubbery").c_str(), std::ios::out | std::ios::trunc);
    if (!fd)
      throw std::runtime_error("Error opening file");
    fd << "      /\\      " << std::endl;
    fd << "     /\\*\\     " << std::endl;
    fd << "    /\\O\\*\\    " << std::endl;
    fd << "   /*/\\/\\/\\   " << std::endl;
    fd << "  /\\O\\/\\*\\/\\  " << std::endl;
    fd << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    fd << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    fd << "      ||      " << std::endl;
    fd << "      ||      " << std::endl;
    fd << "      ||      " << std::endl;
    fd.close();
  }