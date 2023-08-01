/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:28:30 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 19:23:24 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
  public:
    class GradeTooHighException : public std::exception {
      public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        virtual const char *what() const throw();
    };

    Form();
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
     
    Form(const std::string &name, const int _gradeToSign, const int _gradeRequired);
    std::string getName() const;
    bool getIfSigned()const;
    int getGradeToSign() const; 
    int getGradeRequired() const;
    void beSigned(Bureaucrat const &bureaucrat);
    
  private:
    const std::string _name;
    bool _ifSigned;
    const int _gradeToSign;
    const int _gradeRequired;
};

std::ostream& operator<<(std::ostream& os, const Form &form);


#endif // FORM_HPP