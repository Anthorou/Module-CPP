/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:25:18 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/19 13:14:44 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	
public:

	MutantStack<T>(void) {}
	~MutantStack<T>(void) {}
	MutantStack<T>(const MutantStack<T> & cpy) : std::stack<T>(cpy) {}

	MutantStack<T> & operator=(const MutantStack<T> & rhs) {
		static_cast<void>rhs;
		return (*this);
	}
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator begin(void) {
		return (this->c.begin());
	}

	iterator end(void) {
		return (this->c.end());	
	}
	
};
