/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:44:29 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/16 16:11:36 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {
	
public :

	Fixed(void);
	Fixed(Fixed const &n);
	~Fixed(void);
	
private :

	int _n;
	int const static _bits;
	
};
