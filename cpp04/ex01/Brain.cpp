/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:49:45 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:19:05 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(Brain const &cpy) {
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = cpy;
}

Brain & Brain::operator=(Brain const &rhs) {
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < MAX_IDEAS; i++) {
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void Brain::setIdea(std::string const &idea, int index) {
	_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	return (_ideas[index]);
}
