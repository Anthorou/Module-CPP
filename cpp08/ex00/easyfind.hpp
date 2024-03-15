/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:53:23 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/15 15:53:17 by aroussea         ###   ########.fr       */
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
void easyfind(T const & container, int nb) {
	if (std::find(container.begin(), container.end(), nb) != container.end())
		std::cout << nb << " found in the container!" << std::endl;
	else
		throw NotFoundException();
}
