/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:59:41 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:05:33 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	
public :

	Dog(void);
	~Dog(void);
	Dog(Dog const &cpy);
	
	Dog & operator=(Dog const &rhs);

	void makeSound(void) const;
	
};
