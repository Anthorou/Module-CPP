/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:42:22 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/10 14:34:40 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceStr(std::string str, char *s1, char *s2, size_t pos) {
	std::string newStr;
	std::string s1Str(s1);
	newStr = str.substr(0, pos) + s2 + str.substr(pos + s1Str.length(), str.back());
	return (newStr);
}

std::string verifyString(std::string content, char *s1, char *s2) {
	size_t found = content.find(s1);

	while (true) {
		if (found == std::string::npos)
			return (content);
		else
			content = replaceStr(content, s1, s2, found);
		found = content.find(s1);
	}
	
	return (content);
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

void createWrite(std::string content, std::string name) {
	std::ofstream myFile(name);
	myFile << content;
	myFile.close();
}

int main(int argc, char **argv) {
	std::ifstream ifs(argv[1]);
	std::string content;
	
	if (argc != 4) {
		std::cerr << "Must have 3 args!" << std::endl;
		return (1);
	}
	if (!ifs.is_open()) {
		std::cerr << "Error opening the file!" << std::endl;
		return (1);
	}
	
	content = verifyString(getContent(ifs), argv[2], argv[3]);
	std::string name(argv[1]);
	name += ".replace";
	createWrite(content, name);
	
	return (0);
}