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

Dog::Dog(void) {
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->_cerveau = new Brain;
}

Dog::~Dog(void) {
	std::cout << "Dog Default destructor called" << std::endl;
	delete this->_cerveau;
}

Dog::Dog(Dog const &cpy) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = cpy;
}

Dog & Dog::operator=(Dog const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	this->_cerveau = rhs._cerveau;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "BARK BARK BARK!!" << std::endl;
}
