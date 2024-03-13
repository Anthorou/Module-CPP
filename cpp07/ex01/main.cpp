/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:21:33 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/13 15:50:05 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



int main() {
	const char *tab[3] = {"allo", "max", "oui"};
	int arr[] = {3, 4, 5};
	int *tab2[3] = {&arr[0], &arr[1], &arr[2]};
	int size = 3;
	
	::iter(tab, size, ::print<const char>);
	::iter(tab2, size, ::print<int>);
	
	return (0);
}
