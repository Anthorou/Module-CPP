/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:30:01 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 17:53:04 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	
public:

	AForm(void);
	virtual ~AForm(void);
	AForm(const AForm & cpy);
	AForm(const std::string & name, size_t gradeSign, size_t gradeExec, std::string & target);
	
	AForm & operator=(const  AForm & rhs);

	std::string getName(void) const;
	std::string getSigned(void) const;
	size_t getGradeSign(void) const;
	size_t getGradeExec(void) const;
	std::string getTarget(void) const;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class NotSignedException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	int beSigned(Bureaucrat & bureaucrat);
	virtual bool execute(Bureaucrat const & executor) const = 0;
	
private:

	const std::string _name;
	bool _signed;
	const size_t _gradeSigned;
	const size_t _gradeExec;
	const std::string _target;

	size_t _checkGrade(size_t grade) const;
	
};

std::ostream & operator<<(std::ostream & o, const AForm & rhs);