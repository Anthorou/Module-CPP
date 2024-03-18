/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:55:21 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/18 15:42:53 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>

Span::Span(void) : _size(0) {}

Span::Span(const Span & cpy) {
	*this = cpy;
}

Span::Span(const unsigned int & N) : _size(N) {}

Span::~Span(void) {}

Span & Span::operator=(const Span & rhs) {
	if (this == &rhs)
		return (*this);
	this->_content.clear();
	this->_size = rhs._size;
	this->_content = rhs._content;
	return (*this);
}

const char *Span::OutOfPlaceException::what(void) const throw() {
	return ("No space left in the Span!");
}

const char *Span::NoDistanceFoundException::what(void) const throw() {
	return ("No distance found, make sure that the Span is not empty!");
}

void Span::addNumber(const int & nb) {
	if (_content.size() != _size)
		_content.push_back(nb);
	else
		throw OutOfPlaceException();
}

void Span::addBunchNumbers(std::list<int>::iterator begin, std::list<int>::iterator end) {
	while (begin != end) {
		addNumber(*begin);
		++begin;
	}
}

int Span::shortestSpan(void) {
	int retValue = std::numeric_limits<int>::max();
	std::list<int>::iterator it;
	std::list<int> diff(_size);

	if (_size <= 1)
		throw NoDistanceFoundException();
	
	_content.sort();
	std::adjacent_difference(_content.begin(), _content.end(), diff.begin());
	
	for (it = std::next(diff.begin()); it != diff.end(); ++it) {
		if (*it < retValue)
			retValue = *it;
	}
	
	return (retValue);
}

int Span::longestSpan(void) {
	int retValue = 0;
	
	if (_size <= 1)
		throw NoDistanceFoundException();

	_content.sort();

	retValue = _content.back() - *_content.begin();
	return (retValue);
}
