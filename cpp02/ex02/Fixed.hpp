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
	
	Fixed & operator=(Fixed const &rhs);
	bool operator<(Fixed const &rhs) const;
	bool operator>(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;
	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed & min(Fixed &n1, Fixed &n2);
	static const Fixed & min(Fixed const &n1, Fixed const &n2);
	static Fixed & max(Fixed &n1, Fixed &n2);
	static const Fixed & max(Fixed const &n1, Fixed const &n2);
	
private :

	int _n;
	static int const _bits;
	
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
