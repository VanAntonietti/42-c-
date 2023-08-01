/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:12:10 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/01 20:47:14 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"	
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void test_ex00(void) {
  std::cout << "/***********************************/" << std::endl;
  std::cout << "TEST EX00" << std::endl;
  Bureaucrat b2;
  Bureaucrat b1("Bureaucrat1", 1);
  b2 = b1;
  Bureaucrat b3("Bureaucrat3", 140);
  Bureaucrat b4("Bureaucrat4", 150);
  
  std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl;
  b2.decrementGrade();
  b3.incrementGrade();
  std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl;
  try {
    b1.incrementGrade();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    b4.decrementGrade();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "/***********************************/" << std::endl;
}

void test_ex01(void) {
  std::cout << "TEST EX01" << std::endl;

  Bureaucrat              b1("CO", 1);
  Bureaucrat              b2("Estagiario", 150);
  Bureaucrat              b3("Pleno", 90);
  ShrubberyCreationForm   f1("Home");
  PresidentialPardonForm  f2("Mullinete");
  RobotomyRequestForm     f3("Bender");
  
  std::cout << b1 << std::endl;
  std::cout << b2 << std::endl;
  std::cout << b3 << std::endl;
  std::cout << f1 << std::endl;
  std::cout << f2 << std::endl;
  
  std::cout << "/**************** Test Exec with error *******************/" << std::endl;
  try {
  b2.executeForm(f1);
  b2.executeForm(f2);
  b2.executeForm(f3);
  b3.executeForm(f1);
  b3.executeForm(f2);
  b3.executeForm(f3);
  b1.executeForm(f1);
  b1.executeForm(f2);
  b1.executeForm(f3);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "/**************** Assign Test *******************/" << std::endl;
  b2.signForm(f1);
  b2.signForm(f2);
  b2.signForm(f3);
  b3.signForm(f1);
  b3.signForm(f2);
  b3.signForm(f3);
  b1.signForm(f1);
  b1.signForm(f2);
  b1.signForm(f3);
  std::cout << "/**************** Test Exec without *******************/" << std::endl;
  b2.executeForm(f1);
  b2.executeForm(f2);
  b2.executeForm(f3);
  b3.executeForm(f1);
  b3.executeForm(f2);
  b3.executeForm(f3);
  b1.executeForm(f1);
  b1.executeForm(f2);
  b1.executeForm(f3);
  b1.executeForm(f3);
  b1.executeForm(f3);
  b1.executeForm(f3);
  b1.executeForm(f3);
  b1.executeForm(f3);
  b1.executeForm(f3);
  b1.executeForm(f3);
}

int main(void) {
  test_ex00();
  test_ex01();
  return (0);
}
