/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:44:29 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/17 15:59:14 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	
public :

	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &cpy);
	~Fixed(void);
	
	Fixed & operator=(Fixed const & rhs);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
private :

	int _n;
	static int const _bits;
	
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
