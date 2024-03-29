/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:44:38 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:05:21 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class AAnimal {
	
public :

	AAnimal(void);
	virtual ~AAnimal(void);
	AAnimal(AAnimal const &cpy);
	AAnimal(std::string const &typeOfAnimal);

	AAnimal & operator=(AAnimal const &rhs);

	std::string getType(void) const;
	virtual void makeSound(void) const = 0;

protected :

	std::string type;
	
};
