/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:29:58 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 15:28:42 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(void) : _name("random form"), _signed(false), _gradeSigned(150), _gradeExec(150) {}

AForm::AForm(const AForm & cpy) : _name(cpy.getName() + "_copy"), _signed(false), _gradeSigned(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec()) {
	*this = cpy;
}

AForm::AForm(const std::string & name, size_t gradeSign, size_t gradeExec, std::string & target) : _name(name), _signed(false), _gradeSigned(_checkGrade(gradeSign)), _gradeExec(_checkGrade(gradeExec)), _target(target) {}

AForm::~AForm(void) {}

AForm & AForm::operator=(const AForm & rhs) {
	if (this == &rhs)
		return *this;
	return *this;
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs) {
	o << "AForm name : " << rhs.getName() 
	<< "\nsigned : " << rhs.getSigned() 
	<< "\ngrade to sign : " << rhs.getGradeSign() 
	<< "\ngrade to execute : " << rhs.getGradeExec();
	return o;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Error: Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Error: Grade too low!");
}

const char *AForm::NotSignedException::what() const throw() {
	return ("Error: The form is not signed!");
}

std::string AForm::getName(void) const {
	return this->_name;
}

std::string AForm::getSigned(void) const {
	if (this->_signed)
		return ("Yes");
	else
		return ("No");
}

size_t AForm::getGradeSign(void) const {
	return this->_gradeSigned;
}

size_t AForm::getGradeExec(void) const {
	return this->_gradeExec;
}

std::string AForm::getTarget(void) const {
	return this->_target;
}

size_t AForm::_checkGrade(size_t grade) const {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw  GradeTooLowException();
	return (grade);
}

int AForm::beSigned(Bureaucrat & bureaucrat) {
	if (this->_gradeSigned < bureaucrat.getGrade())
		throw GradeTooLowException();
	else if (this->_signed == false)
	{
		this->_signed = true;
		return 0;
	}
	else
		return 1;
}

bool AForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == "No")
		throw NotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	return true;
}
