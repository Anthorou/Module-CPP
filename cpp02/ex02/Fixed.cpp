/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:44:39 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/17 16:20:19 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(void) : _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n) : _n(n << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _n(static_cast<int>(n * (1 << _bits) + 0.5)) {
	std::cout << "Float constructor called" << std::endl;
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

bool Fixed::operator<(Fixed const &rhs) const {
	return (this->_n < rhs._n);
}

bool Fixed::operator>(Fixed const &rhs) const {
	return (this->_n > rhs._n);
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->_n <= rhs._n);
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->_n >= rhs._n);
}

bool Fixed::operator==(Fixed const &rhs) const {
	return (this->_n == rhs._n);
}

bool Fixed::operator!=(Fixed const &rhs) const {
	return (this->_n != rhs._n);
}

Fixed Fixed::operator+(Fixed const &rhs) const {
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	return (this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void) {
	_n += 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed cpy(*this);
	_n += 1;
	return (cpy);
}

Fixed & Fixed::operator--(void) {
	_n -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed cpy(*this);
	_n -= 1;
	return (cpy);
}


int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

int Fixed::toInt(void) const {
	return (_n >> _bits);
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(_n) / (1 << _bits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

Fixed & Fixed::min(Fixed &n1, Fixed &n2) {
	if (n2 > n1)
		return (n1);
	else
		return (n2);
}

const Fixed & Fixed::min(Fixed const &n1, Fixed const &n2) {
	if (n2 > n1)
		return (n1);
	else
		return (n2);
}

Fixed & Fixed::max(Fixed &n1, Fixed &n2) {
	if (n2 < n1)
		return (n1);
	else
		return (n2);
}

const Fixed & Fixed::max(Fixed const &n1, Fixed const &n2) {
	if (n2 < n1)
		return (n1);
	else
		return (n2);
}
