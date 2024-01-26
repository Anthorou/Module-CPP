/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:10:41 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:12:38 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
	
public :

	Cat(void);
	~Cat(void);
	Cat(Cat const &cpy);

	Cat & operator=(Cat const &rhs);

	virtual void makeSound(void) const;
	
};
