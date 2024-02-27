/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:08:58 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 17:58:07 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Form", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : AForm(cpy) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	AForm::execute(executor);
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
	return true;
}
