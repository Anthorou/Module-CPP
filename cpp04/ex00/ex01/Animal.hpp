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

class Animal {
	
public :

	Animal(void);
	~Animal(void);
	Animal(Animal const &cpy);
	Animal(std::string const &typeOfAnimal);

	Animal & operator=(Animal const &rhs);

	std::string getType(void) const;
	virtual void makeSound(void) const;

protected :

	std::string type;
	
};
