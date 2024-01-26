/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:44:14 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/17 16:21:30 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a(21);
	Fixed b(20);

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	Fixed cpy = a--;
	std::cout << cpy << a << std::endl;

	return 0;
}
