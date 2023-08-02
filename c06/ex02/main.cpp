/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:39:29 by vantonie          #+#    #+#             */
/*   Updated: 2023/08/02 20:40:47 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
  std::cout << "[ CLASS A ]\n";
  A *a = new A();
  identify(a);
  identify(a);
  delete a;

  std::cout << "\n";

  std::cout << "[ CLASS B ]\n";
  B *b = new B();
  identify(b);
  identify(*b);
  delete b;

  std::cout << "\n";

  std::cout << "[ CLASS C ]\n";
  C *c = new C();
  identify(c);
  identify(*c);
  delete c;

  std::cout << "\n";

  std::cout << "[ CLASS INVALID ]\n";
  Base *base = new Base();
  identify(base);
  identify(*base);
  delete base;

  std::cout << "\n";

  std::cout << "[ RANDOM CLASS]\n";
  Base *random = generate();
  identify(random);
  identify(*random);
  delete random;

}