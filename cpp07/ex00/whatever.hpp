/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:06:38 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/13 15:19:19 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T & x, T & y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T & min(T & x, T & y) {
	return ((x<y) ? x : y);
}

template <typename T>
T & max(T & x, T & y) {
	return ((x>y) ? x : y);
}
