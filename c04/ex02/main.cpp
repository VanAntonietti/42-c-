/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:54:03 by vantonie          #+#    #+#             */
/*   Updated: 2023/07/15 20:53:12 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main () {
AAnimal	*lade = new Cat();
	// AAnimal	animal991;

	AAnimal	*dog = new Dog();
	std::cout << std::endl;
	AAnimal	*cat = new Cat();
	std::cout << std::endl;
	WrongAnimal *wronganimal = new WrongAnimal();
	std::cout << std::endl;
	WrongAnimal *wrongcat = new WrongCat();
	std::cout << std::endl;
	AAnimal *animal99[4];
	std::cout << std::endl;
	Cat		*cat2 = new Cat();

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animal99[i] = new Dog();
		else
			animal99[i] = new Cat();
	}

	std::cout << std::endl;
	cat->makeSound();
	dog->makeSound();
	wrongcat->makeSound();
	wronganimal->makeSound();
	cat2->makeSound();

	std::cout << std::endl;
	std::cout << dog->getType() << std::endl
	<< cat->getType() << std::endl
	<< wronganimal->getType() << std::endl
	<< wrongcat->getType() << std::endl;
	std::cout << std::endl;

	delete cat2;
	delete dog;
	delete cat;
	delete wrongcat;
	delete wronganimal;

	for (int i = 0; i < 4; i++)
		delete animal99[i];
	
	delete lade;
	return (0);
}

