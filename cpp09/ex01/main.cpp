/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:00:33 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 10:16:47 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	RPN calc;
	int result;
	
	if (argc != 2)
		return (std::cout << "Error: Number of args not valid." << std::endl, 1);
	
	try {
		result = calc.calcElements(argv[1]);
		std::cout << result << std::endl;
	} catch (std::exception & e) {
		return (std::cout << e.what() << std::endl, 1);
	}
	return (0);
}
