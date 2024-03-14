/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:55:36 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/14 15:25:19 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array {
	
public:

	Array<T>(void) : _arr(new T()), _size(0) {};
	~Array<T>(void) { delete [] _arr; };
	
	Array<T>(unsigned int n) : _arr(new T[n]), _size(n) {};
	
	Array<T>(Array<T> const & cpy) {
		this->_size = cpy._size;
		this->_arr = new T[cpy._size];
		for (unsigned int i = 0; i < cpy._size; i++) {
			this->_arr[i] = cpy._arr[i];
		}
	};

	Array<T> & operator=(Array<T> const & rhs) {
		if (this == &rhs)
			return (*this);
		delete [] this->_arr;
		this->_arr = rhs._arr;
		this->_size = rhs.size;
		return (*this);
	};
	
	T & operator[](unsigned int const & index) const {
		if (index >= _size)
			throw OutOfBoundException();
		return (_arr[index]);
	};
	
	unsigned int size(void) const { return (_size); };

	class OutOfBoundException: public std::exception {
		public:
			virtual const char *what() const throw() {
				return ("Index is not part of the array!");
			};
	};
	
private:

	T * _arr;
	unsigned int _size;
	
};
