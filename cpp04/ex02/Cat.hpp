/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:10:41 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:12:03 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	
public :

	Cat(void);
	~Cat(void);
	Cat(Cat const &cpy);

	Cat & operator=(Cat const &rhs);

	void makeSound(void) const;

private :

	Brain *_brain;
	
};
