/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:10:44 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:28:54 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void) {
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat::Cat(Cat const &cpy) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = cpy;
}

Cat & Cat::operator=(Cat const &rhs) {
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "MEOW MEOW MEOW!!!" << std::endl;
}
