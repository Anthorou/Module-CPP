/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:05:48 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/15 15:26:43 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main() {
	std::list<int> lst;
	std::vector<int> vec;
	int ret;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(8);

	vec.push_back(5);
	vec.push_back(9);
	vec.push_back(50);
	vec.push_back(81);
	
	try {
		ret = easyfind(lst, 8);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << ret << std::endl;

	try {
		ret = easyfind(vec, 51);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << ret << std::endl;
	
	return (0);
}
