/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:44:43 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:32:31 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ORANGE "\033[33m"
#define RED "\033[31m"
#define RESET "\033[0m"

#define NO_ANIMAL 6

int main()
{
	const Animal* tab_animal[NO_ANIMAL];

	for (int i = 0; i < NO_ANIMAL; i++) {
		std::cout << ORANGE << "***constructor for Animal No " << i << " ***" << RESET << std::endl;
		if (i < NO_ANIMAL / 2)
			tab_animal[i] = new Dog();
		else
			tab_animal[i] = new Cat();
		std::cout << std::endl;
	}

	for (int i = 0; i < NO_ANIMAL; i++) {
		std::cout << RED << "*** Destructor for Animal No " << i << " ***" << RESET << std::endl;
		delete(tab_animal[i]);
		std::cout << std::endl;
	}

	std::cout << RED << "*** Creating a new cat ***" << RESET << std::endl;
	Cat* cat = new Cat();

	std::cout << ORANGE << "cat->setIdea(\"bien le bonjour\", 3)" << RESET << std::endl;
	cat->setIdea("bien le bonjour", 3);

	std::cout << RED << "*** Creating a deep copy of cat ***" << RESET << std::endl;
	Cat* cpy_cat = new Cat(*cat);

	std::cout << ORANGE << "cat->getIdea(3) : " << RESET << cat->getIdea(3) << std::endl;
	std::cout << ORANGE << "cpy_cat->getIdea(3) : " << RESET << cpy_cat->getIdea(3) << std::endl;

	std::cout << ORANGE << "cat->setIdea(\"non\", 3)" << RESET << std::endl;
	cat->setIdea("non", 3);

	std::cout << ORANGE << "cpy_cat->getIdea(3) : " << RESET << cpy_cat->getIdea(3) << std::endl;
	
	delete(cat);
	delete(cpy_cat);

	return 0;
}
