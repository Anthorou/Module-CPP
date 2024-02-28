/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:12:29 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/28 09:48:16 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern & cpy) {
	*this = cpy;
}

Intern::~Intern(void) {}

Intern & Intern::operator=(const Intern & rhs) {
	if (this == &rhs)
		return *this;
	return *this;
}

static AForm * makeShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}

static AForm * makeRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

static AForm * makePresidential(std::string target) {
	return new PresidentialPardonForm(target);
}

AForm * Intern::makeForm(std::string name, std::string target) {
	AForm * (*all_forms[])(std::string target) = {&makeShrubbery, &makeRobotomy, &makePresidential};
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++) {
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << " form" << std::endl;
			return all_forms[i](target);
		}
	}
	std::cout << "Intern couldn't create " << name << " form" << std::endl;
	return NULL;
}
