/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:00:38 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 11:05:18 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN : public std::stack<int> {
	
public:

	RPN(void);
	~RPN(void);
	RPN(const RPN & cpy);

	RPN & operator=(const RPN & rhs);
	
	int calcElements(std::string str);

	class InvalidCharacter: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class DivisionByZero: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class InvalidOrder: public std::exception {
		public:
			virtual const char *what() const throw();
	};
	
};