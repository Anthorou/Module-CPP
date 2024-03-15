/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:53:23 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/15 15:23:44 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>

class NotFoundException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Int not found in the container!");
		};
};

template <typename T>
int easyfind(T const & container, int nb) {
	typename T::const_iterator it;
	typename T::const_iterator ite = container.end();

	for (it = container.begin(); it != ite; it++) {
		if (*it == nb)
			return (*it);
	}
	throw NotFoundException();
	return (-1);
}
