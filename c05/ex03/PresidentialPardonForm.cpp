/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:38:09 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/04 19:19:14 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

  PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
  }

  PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
  }

  PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target) {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = other;
  }

  PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
    if (this != &other) {
      const_cast<std::string&> (this->_target) = other.getTarget();
    }
    return *this;
  }

  PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
  }

  std::string PresidentialPardonForm::getTarget() const {
    return _target;
  }

  void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->getIfSigned() == false) {
      std::cout<< "Form not signed" << std::endl;
      throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() >= this->getGradeRequired()) {
      throw AForm::GradeTooLowException();
    }
    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
  }

