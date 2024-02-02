/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:10:44 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:19:00 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal() {
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat::Cat(Cat const &cpy) : AAnimal() {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = cpy;
}

Cat & Cat::operator=(Cat const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "MEOW MEOW MEOW!!!" << std::endl;
}
