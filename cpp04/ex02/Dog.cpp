/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:59:44 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:18:54 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal() {
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog Default destructor called" << std::endl;
}

Dog::Dog(Dog const &cpy) : AAnimal() {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = cpy;
}

Dog & Dog::operator=(Dog const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "BARK BARK BARK!!" << std::endl;
}
