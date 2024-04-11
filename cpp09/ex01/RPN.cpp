/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:00:35 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 11:18:06 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::~RPN(void) {}

RPN::RPN(const RPN & cpy) {
	if (*this == cpy)
		return;
	*this = cpy;
}

RPN & RPN::operator=(const RPN & rhs) {
	static_cast<void>(rhs);
	return (*this);
}

const char * RPN::InvalidCharacter::what() const throw() {
	return ("Error: Bad input.");
}

const char * RPN::DivisionByZero::what() const throw() {
	return ("Error: Cannot divide by 0.");
}

const char * RPN::InvalidOrder::what() const throw() {
	return ("Error: Invalid order.");
}

static bool checkStr(std::string str) {
	std::string::iterator it;

	for (it = str.begin(); it != str.end(); ++it) {
		if (!isdigit(*it) && (*it != ' ' && *it != '*' && *it != '+' && *it != '-' && *it != '/'))
			return false;
		else if (*it != ' ') {
			if (++it != str.end() && *it != ' ') 
				return false;
			--it;
		}	
	}
	return true;
}

int RPN::calcElements(std::string str) {
	int nb;
	
	if (!checkStr(str))
		throw InvalidCharacter();

	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] != ' ') {
			if (!isdigit(str[i])) {
				switch (str[i]) {
					case '+':
						nb = this->top();
						this->pop();
						if (this->size() == 0)
							throw InvalidOrder();
						this->top() += nb;
						break;
					case '-':
						nb = this->top();
						this->pop();
						if (this->size() == 0)
							throw InvalidOrder();
						this->top() -= nb;
						break;
					case '*':
						nb = this->top();
						this->pop();
						if (this->size() == 0)
							throw InvalidOrder();
						this->top() *= nb;
						break;
					case '/':
						nb = this->top();
						this->pop();
						if (this->size() == 0)
							throw InvalidOrder();
						if (this->top() != 0)
							this->top() /= nb;
						else
							throw DivisionByZero();
						break;
				}
			} else {
				nb = std::atoi(&str[i]);
				this->push(nb);
			}
		}
	}
	return (this->top());
}
