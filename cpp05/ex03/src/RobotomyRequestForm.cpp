/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:13:26 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 17:58:21 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Form", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy) : AForm(cpy) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	AForm::execute(executor);
	srand(time(NULL));
	if (rand() % 2 + 0)
		std::cout << this->getTarget() << " has been robotoized!" << std::endl;
	else
		std::cout << this->getTarget() << " robotomization has failed!" << std::endl;
	return true;
}