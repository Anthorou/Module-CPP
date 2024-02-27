/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:31 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 17:36:39 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"

int main() {

	try {
		Bureaucrat bob("bob", 50);
		RobotomyRequestForm form("test");
		std::cout << bob << std::endl;
		std::cout << form << std::endl;
		bob.signForm(form);
		std::cout << form << std::endl;
		form.execute(bob);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	return 0;
}
