/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:03:47 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/04 15:42:14 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

std::string to_Upper(std::string str) {
	int i = 0;

	while(str[i]) {
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main(int argc, char **argv) {
	std::string strs[argc - 1];
	int i = 1;
	
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (i < argc) {
		strs[i - 1] = argv[i];
		strs[i - 1] = to_Upper(strs[i - 1]);
		i++;
	}
	for (int j = 0; j < argc - 1; j++) {
		std::cout << strs[j] ;
		if (j != argc - 1)
			std::cout << " " ;
	}
	std::cout << std::endl;
	
	return 0;
}
