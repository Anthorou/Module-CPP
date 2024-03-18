/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:55:25 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/18 15:46:54 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main() {
// 	Span lst(1);
	
// 	lst.addNumber(11);


// 	try {
// 		std::cout << lst.longestSpan() << std::endl;
// 	}
// 	catch (std::exception & e) {
// 		std::cout << e.what() << std::endl;
// 	}

// 	return (0);
// }

int main()
{
	std::list<int> nb;
	Span sp = Span(5);

	nb.push_back(1);
	nb.push_back(4);
	nb.push_back(8);
	nb.push_back(10);
	nb.push_back(14);

	sp.addBunchNumbers(nb.begin(), nb.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return (0);
}
