/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:15:04 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 21:33:11 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
  public:
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();

    AForm *makeForm(std::string formName, std::string target);
  private:
    static AForm *createPresidentialPardonForm(std::string target);
    static AForm *createRobotomyRequestForm(std::string target);
    static AForm *createShrubberyCreationForm(std::string target);
    static const std::string _form[3];
    static AForm *(*_createForm[3])(std::string);
};

#endif