/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:42:22 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/04 15:54:44 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "The programme need to have 3 args (file name, s1, s2)" << std::endl;
		return (1);
	}
	
	return (0);
}