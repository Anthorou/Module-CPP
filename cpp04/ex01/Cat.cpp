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

Cat::Cat(void) {
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->_cerveau = new Brain;
}

Cat::~Cat(void) {
	std::cout << "Cat Default destructor called" << std::endl;
	delete this->_cerveau;
}

Cat::Cat(Cat const &cpy) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = cpy;
}

Cat & Cat::operator=(Cat const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	this->_cerveau = rhs._cerveau;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "MEOW MEOW MEOW!!!" << std::endl;
}
