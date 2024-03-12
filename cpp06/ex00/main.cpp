/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:57:33 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/12 17:02:26 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <cstdlib>

void affChar(double value) {
	char charValue;
	
	if (isnan(value)) {
		std::cout << "char: impossible" << std::endl;
		return;
	}
	
	if (value < 32 || value > 126) {
		std::cout << "char: Non displayable" << std::endl;
		return;
	}
	charValue = static_cast<char>(value);
	std::cout << "char: '" << charValue << "'" << std::endl;
}

void affInt(double value) {
	int intValue;
	
	if (isnan(value)) {
		std::cout << "int: impossible" << std::endl;
		return;
	}
	
	intValue = static_cast<int>(value);
	std::cout << "int: " << intValue << std::endl;
}

bool hasDigitAfterDecimal(double value) {
	std::string str = std::to_string(value);
	size_t decimalPos = str.find('.');
	if (decimalPos != std::string::npos) {
		return (str.find_first_not_of("0", decimalPos + 1) != std::string::npos);
	}
	return (false);
}

void affFloat(double value) {
	float fValue;

	if (isnan(value)) {
		std::cout << "float: nanf" << std::endl;
		return;
	}
	
	fValue = static_cast<float>(value);
	if (hasDigitAfterDecimal(value))
		std::cout << "float: " << fValue << "f" << std::endl;
	else
		std::cout << "float: " << fValue << ".0f" << std::endl;
}

void affDouble(double value) {
	if (isnan(value)) {
		std::cout << "double: nan" << std::endl;
		return;
	}

	if (hasDigitAfterDecimal(value))
		std::cout << "double: " << value << std::endl;
	else
		std::cout << "double: " << value << ".0" << std::endl;
}

int main(int argc, char **argv) {
	double value;
	char *p = NULL;
	if (argc < 2)
		return (std::cout << "Error: not enough args!" << std::endl, 1);
	
	p = strchr(argv[1], 'f');
	if (p && argv[1][0] != 'f')
		*p = '\0';
	
	if (strlen(argv[1]) == 1 && !isdigit(argv[1][0]))
		value = static_cast<double>(argv[1][0]);
	else {
		value = strtod(argv[1], &p);
		if (*p)
			value = NAN;
	}
	
	affChar(value);
	affInt(value);
	affFloat(value);
	affDouble(value);

	return 0;
}