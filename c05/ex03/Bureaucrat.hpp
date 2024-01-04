/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:12:08 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/04 19:19:51 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
  public:
    class GradeTooHighException : public std::exception {
      public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        virtual const char *what() const throw();
    };
    
    Bureaucrat();
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();

    Bureaucrat(const std::string &name, int grade);
    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &form);
    void executeForm(AForm const &form);

  private:
    const std::string _name;
    int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif