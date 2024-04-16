/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:26 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/10 15:34:16 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("No Name"), _grade(150) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat & cpy) {
	*this = cpy;
}

Bureaucrat::Bureaucrat(const std::string & name, size_t grade) : _name(name), _grade(_checkGrade(grade)) {}


Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) {
	if (this == &rhs)
		return (*this);
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}

size_t Bureaucrat::_checkGrade(size_t grade) const {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	return (grade);
}

void Bureaucrat::upGrade(void) {
	size_t tmp = this->_grade - 1;
	this->_grade = _checkGrade(tmp);
}

void Bureaucrat::downGrade(void) {
	size_t tmp = this->_grade + 1;
	this->_grade = _checkGrade(tmp);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Error: The grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Error: The grade is too low!");
}

std::string Bureaucrat::getName(void) const {
	return (this->_name);
}

size_t Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
	} catch (std::exception &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	std::cout << this->getName() << " signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
	} catch (std::exception &e) {
		std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}
