/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:59:41 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:12:38 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	
public :

	Dog(void);
	~Dog(void);
	Dog(Dog const &cpy);
	
	Dog & operator=(Dog const &rhs);

	void makeSound(void) const;

private :

	Brain *_brain;
	
};
