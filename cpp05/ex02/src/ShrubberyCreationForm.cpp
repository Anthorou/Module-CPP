/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:08:58 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 17:35:45 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Form", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : AForm(cpy) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == "No")
		throw NotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::ofstream file(this->getTarget() + "_shrubbery");
	file <<
	"        *\n"
	"       * *\n"
	"      *   *\n"
	"     *_____*\n"
	"    *       *\n"
	"   *         *\n"
	"  *___________*\n"
	"      *   *\n"
	"      *   *\n"
	"      *   *";
	file.close();
}
