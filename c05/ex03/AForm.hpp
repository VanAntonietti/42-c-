/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:28:30 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 19:28:28 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
  public:
    class GradeTooHighException : public std::exception {
      public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        const char *what() const throw();
    };
    class FormNotSignedException : public std::exception {
      public:
        const char *what() const throw();
    };

    AForm();
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    AForm(const std::string &name, const int _gradeToSign, const int _gradeRequired);
    std::string getName() const;
    bool getIfSigned()const;
    int getGradeToSign() const; 
    int getGradeRequired() const;
    void beSigned(Bureaucrat const &bureaucrat);

    virtual void execute(Bureaucrat const &executor) const = 0;

  private:
    const std::string _name;
    bool _ifSigned;
    const int _gradeToSign;
    const int _gradeRequired;
};

std::ostream& operator<<(std::ostream& os, const AForm &form);

#endif // AFORM_HPP