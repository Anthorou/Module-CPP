/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:26:28 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/20 17:10:34 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <string>

static std::string getContent(std::ifstream &fileName) {
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

void BitcoinExchange::addDB(std::string content) {
	std::string date;
	float value;
	size_t pos;

	pos = content.find(",");
	date = content.substr(0, pos);
	value = std::stof(content.substr(pos + 1));
	this->insert(std::make_pair(date, value));
}

void BitcoinExchange::dbSplit(std::string content) {
	std::string segment;
	size_t pos = content.find("\n");
	
	content = content.substr(pos + 1);
	pos = content.find("\n");
	while (pos != std::string::npos) {
		segment = content.substr(0, pos);
		content = content.substr(pos + 1);
		this->addDB(segment);
		pos = content.find("\n");
	}
}

BitcoinExchange::BitcoinExchange(void) {
	std::ifstream ifs("data.csv");
	std::string content = getContent(ifs);
	this->dbSplit(content);
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & cpy) {
	*this = cpy;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & rhs) {
	static_cast<void>(rhs);
	return (*this);
}

typedef std::map<std::string, float>::iterator iterator;
iterator BitcoinExchange::lowerBoundReverse(const std::string & key) {
	iterator it = upper_bound(key);
	if (it != begin())
		--it;
	return (it);
}
