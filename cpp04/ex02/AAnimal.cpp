/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:44:40 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:19:11 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "Random animal";
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal Destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &cpy) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = cpy;
}

AAnimal::AAnimal(std::string const &typeOfAnimal) {
	std::cout << "Animal Name constructor called" << std::endl;
	this->type = typeOfAnimal;
}

AAnimal & AAnimal::operator=(AAnimal const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

std::string AAnimal::getType(void) const {
	return (this->type);
}

void AAnimal::makeSound(void) const {
	std::cout << this->type << " makes a sound" << std::endl;
}
