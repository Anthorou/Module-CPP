/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:28 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/22 16:14:01 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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

	class GradeTooHighException: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char *what() const throw();
	};
	
private:

	std::string _name;
	size_t		_grade;

	size_t _checkGrade(size_t grade) const;
	
};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs);
