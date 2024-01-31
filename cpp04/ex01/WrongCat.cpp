/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:59 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:33:21 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Default destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cpy) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs) {
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "MEOW MEOW MEOW!!!(Fake cat)" << std::endl;
}
