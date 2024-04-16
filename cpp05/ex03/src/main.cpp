/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:31 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/16 12:54:19 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main() {

	try {
		Intern random;
		AForm *form;
		form = random.makeForm("shrubbery creat", "test");
		form->getName();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	return 0;
}
