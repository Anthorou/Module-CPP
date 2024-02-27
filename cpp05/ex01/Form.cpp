/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:29:58 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 15:37:15 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("random form"), _signed(false), _gradeSigned(150), _gradeExec(150) {}

Form::Form(const Form & cpy) : _name(cpy.getName() + "_copy"), _signed(false), _gradeSigned(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec()) {
	*this = cpy;
}

Form::Form(const std::string & name, size_t gradeSign, size_t gradeExec) : _name(name), _signed(false), _gradeSigned(_checkGrade(gradeSign)), _gradeExec(_checkGrade(gradeExec)) {}

Form::~Form(void) {}

Form & Form::operator=(const Form & rhs) {
	if (this == &rhs)
		return *this;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
	o << "Form name : " << rhs.getName() 
	<< "\nsigned : " << rhs.getSigned() 
	<< "\ngrade to sign : " << rhs.getGradeSign() 
	<< "\ngrade to execute : " << rhs.getGradeExec();
	return o;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Error: Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Error: Grade too low!");
}

std::string Form::getName(void) const {
	return this->_name;
}

std::string Form::getSigned(void) const {
	if (this->_signed)
		return ("Yes");
	else
		return ("No");
}

size_t Form::getGradeSign(void) const {
	return this->_gradeSigned;
}

size_t Form::getGradeExec(void) const {
	return this->_gradeExec;
}

size_t Form::_checkGrade(size_t grade) const {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw  GradeTooLowException();
	return (grade);
}

int Form::beSigned(Bureaucrat & bureaucrat) {
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
