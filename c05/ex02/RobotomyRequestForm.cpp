/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:38:09 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 19:43:52 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

  RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
  }

  RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
  }

  RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = other;
  }

  RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
    if (this != &other) {
      const_cast<std::string&> (this->_target) = other.getTarget();
    }
    return *this;
  }

  RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
  }

  std::string RobotomyRequestForm::getTarget() const {
    return _target;
  }

  void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (this->getIfSigned() == false)
      throw AForm::FormNotSignedException();
    if (executor.getGrade() <= this->getGradeRequired())
      throw AForm::GradeTooLowException();
    if (1 + (std::rand() % 2) == 1)
      std::cout << "The " << _target << " has been robotomized successfully." << std::endl;
    else
      std::cout << "The " << _target << " robotomization has failed." << std::endl;
  }