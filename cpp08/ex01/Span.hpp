/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:55:22 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/18 15:40:10 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <algorithm>

class Span {

public:

	Span(void);
	~Span(void);
	Span(const Span & cpy);
	Span(const unsigned int & N);

	Span & operator=(const Span & rhs);

	void addNumber(const int & nb);
	void addBunchNumbers(std::list<int>::iterator begin, std::list<int>::iterator end);
	int shortestSpan(void);
	int longestSpan(void);

	class OutOfPlaceException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class NoDistanceFoundException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:

	std::list<int>	_content;
	unsigned int	_size;

};
