/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:28 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/10 15:33:53 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
	
public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat(const std::string & name, size_t grade);
	Bureaucrat(const Bureaucrat & cpy);
	
	Bureaucrat & operator=(const Bureaucrat & rhs);

	std::string	getName(void) const;
	size_t		getGrade(void) const;

	void		upGrade(void);
	void		downGrade(void);

	void		signForm(AForm &form);
	void		executeForm(AForm const & form);

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};
	
private:

	const std::string _name;
	size_t		_grade;

	size_t _checkGrade(size_t grade) const;
	
};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs);
