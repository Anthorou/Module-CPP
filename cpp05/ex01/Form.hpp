/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:30:01 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 15:35:58 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	
public:

	Form(void);
	~Form(void);
	Form(const Form & cpy);
	Form(const std::string & name, size_t gradeSign, size_t gradeExec);
	
	Form & operator=(const  Form & rhs);

	std::string getName(void) const;
	std::string getSigned(void) const;
	size_t getGradeSign(void) const;
	size_t getGradeExec(void) const;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	int beSigned(Bureaucrat & bureaucrat);
	
private:

	const std::string _name;
	bool _signed;
	const size_t _gradeSigned;
	const size_t _gradeExec;

	size_t _checkGrade(size_t grade) const;
	
};

std::ostream & operator<<(std::ostream & o, const Form & rhs);