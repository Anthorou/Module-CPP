/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:21:30 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/13 15:51:25 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename S, typename F>
void iter(T **tab, S size, F func) {
	for (S i = 0; i < size; i++) {
		func(tab[i]);
	}
}

template <typename T>
void print(T * element) {
	std::cout << *element << std::endl;
}
