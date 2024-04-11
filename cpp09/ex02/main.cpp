/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:21:29 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 14:05:55 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) 
		return (std::cout << "Error: Not enough args!" << std::endl, 1);

	try {
		PmergeMe sorting(argc, argv);
	} catch (std::exception & e) {
		return (std::cout << e.what() << std::endl, 1);
	}
	
	return (0);
}
