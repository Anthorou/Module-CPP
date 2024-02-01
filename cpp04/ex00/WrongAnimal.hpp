/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:18:01 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:25:27 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {

public :

	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal(WrongAnimal const &cpy);
	WrongAnimal(std::string const &typeOfAnimal);

	WrongAnimal & operator=(WrongAnimal const &rhs);

	std::string getType(void) const;
	void makeSound(void) const;

protected :

	std::string type;
	
};
