/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:08:53 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 08:56:32 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	checkDate(std::string date) {
	std::string::iterator it;
	
	for (it = date.begin(); it != date.end(); ++it) {
		if (!isdigit(*it) && *it != '-')
			return false;
	}
	return true;
}

void	outputContent(std::string content, BitcoinExchange &btc) {
	BitcoinExchange::iterator it;
	std::string date;
	float		nb;
	long long	nbLL;
	float		result;
	size_t		pos = content.find(" | ");
	
	if (pos != std::string::npos) {
		date = content.substr(0, pos);
		
		try {
			nbLL = std::stoll(content.substr(pos + 2));
		} catch (const std::out_of_range &) {
			std::cout << "Error: Too large a number." << std::endl;
			return ;
		}

		if (date.size() != 10 || !checkDate(date))
			std::cout << "Error: Bad input => " << content << std::endl;
		else if (nbLL < 0)
			std::cout << "Error: Not a positive number." << std::endl;
		else if (nbLL > INT_MAX)
			std::cout << "Error: Too large a number." << std::endl;
		else {
			nb = std::stof(content.substr(pos + 2));
			it = btc.lowerBoundReverse(date);
			result = nb * it->second;
			std::cout << date << " => " << nb << " = " << result << std::endl;
		}
	} else {
		std::cout << "Error: Bad input => " << content << std::endl;
	}
}

void	parseContent(std::string content, BitcoinExchange &btc) {
	std::stringstream	str_line(content);
	std::string			token_line;
	bool				first = false;

	while (std::getline(str_line, token_line, '\n')) {
		if (!first && token_line != "date | value")
			throw ERR_INCORRETFORMAT;
			
		if (first)
			outputContent(token_line, btc);

		if (!first)
			first = true;
	}
	
}

std::string getContent(std::ifstream &fileName) {
	std::string output;
	char c;
	fileName.get(c);
	
	while (fileName.good()) {
		output += c;
		c = fileName.get(); 
	}
	fileName.close();
	return (output);
}

int main(int argc, char **argv) {
	BitcoinExchange	btc;
	std::string		content;	

	if (argc < 2)
		return (std::cout << "Not enough args" << std::endl, 1);
	
	std::ifstream ifs(argv[1]);
	
	if (!ifs.is_open())
		return (std::cerr << "Error opening the file!" << std::endl, 1);
	
	try {
		parseContent(getContent(ifs), btc);
	} catch (const char * e) {
		std::cout << e << std::endl;
	}
	
	return (0);
}
