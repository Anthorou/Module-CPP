/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:31 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/26 15:30:16 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat bob("bob", 129);
		Form form("document", 130, 120);
		std::cout << bob << std::endl;
		std::cout << form << std::endl;
		bob.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	return 0;
}
