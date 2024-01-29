/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:56 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:30:40 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
public :

	WrongCat(void);
	~WrongCat(void);
	WrongCat(WrongCat const &cpy);

	WrongCat & operator=(WrongCat const &rhs);

	void makeSound(void) const;
	
};