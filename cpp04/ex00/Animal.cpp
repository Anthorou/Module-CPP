/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:44:40 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:04:55 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "Random animal";
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal const &cpy) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = cpy;
}

Animal::Animal(std::string const &typeOfAnimal) {
	std::cout << "Animal Name constructor called" << std::endl;
	this->type = typeOfAnimal;
}

Animal & Animal::operator=(Animal const &rhs) {
	this->type = rhs.type;
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->type);
}

void Animal::makeSound(void) const {
	std::cout << this->type << " makes a sound" << std::endl;
}
