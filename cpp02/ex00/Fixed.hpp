/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:44:29 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/17 15:15:40 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	
public :

	Fixed(void);
	Fixed(Fixed const &n);
	~Fixed(void);
	
	Fixed & operator=(Fixed const & rhs);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
private :

	int _n;
	int const static _bits;
	
};
