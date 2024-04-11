/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:37:37 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 08:11:38 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

# define ERR_INCORRETFORMAT "Error: Incorret format.";

class BitcoinExchange: public std::map<std::string, float> {
	
public:

	BitcoinExchange(void);
	~BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange & cpy);
	
	BitcoinExchange & operator=(const BitcoinExchange & rhs);

	typedef std::map<std::string, float>::iterator iterator;
	iterator lowerBoundReverse(const std::string & rhs);

private:

	void addDB(std::string content);
	void dbSplit(std::string content);

};