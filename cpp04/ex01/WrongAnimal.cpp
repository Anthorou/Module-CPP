/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:18:03 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:18:38 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "Random WrongAnimal";
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal::WrongAnimal(std::string const &typeOfAnimal) {
	std::cout << "WrongAnimal Name constructor called" << std::endl;
	this->type = typeOfAnimal;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << this->type << " makes a sound" << std::endl;
}
