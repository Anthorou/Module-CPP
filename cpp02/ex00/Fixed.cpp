/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:44:39 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/17 15:33:24 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &n) {
	std::cout << "Copy constructor called" << std::endl;
	*this = n;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}
