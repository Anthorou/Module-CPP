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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* b = new WrongCat();
	
	std::cout << "dog type : " << dog->getType() << " " << std::endl;
	std::cout << "cat type : " << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	std::cout << "wrong animal type : " << b->getType() << " " << std::endl;
	b->makeSound();
	
	delete(meta);
	delete(dog);
	delete(cat);
	delete(b);

	return 0;
}
