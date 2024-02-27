/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:13:42 by aroussea          #+#    #+#             */
/*   Updated: 2024/02/27 17:18:30 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	
public:

	RobotomyRequestForm(void);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm & cpy);
	RobotomyRequestForm(std::string target);
	
	RobotomyRequestForm & operator=(const  RobotomyRequestForm & rhs);

	void execute(Bureaucrat const & executor) const;
	
};
