/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:31 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/22 16:16:11 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat bob("bob", 150);
		std::cout << bob << std::endl;
		bob.downGrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	return 0;
}
