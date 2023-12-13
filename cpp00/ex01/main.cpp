/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:26:45 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/11 17:37:29 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string checkString(void) {
	std::string input;
	
	while (true) {
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (input.empty()) {
			std::cout << "The field can't be left empty!" << std::endl;
			std::cout << "Try again : ";
		}
		else
			break;
	}
	
	return (input);
}

Contact creatContact(void) {
	Contact contact;
	std::string fName;
	std::string lName;
	std::string nName;
	std::string pNumber;
	std::string dSecret;

	std::cout << "Enter the first name of the new contact : ";
	fName = checkString();
	std::cout << "Enter the last name of the new contact : ";
	lName = checkString();
	std::cout << "Enter the nickname of the new contact : ";
	nName = checkString();
	std::cout << "Enter the phone number of the new contact : ";
	pNumber = checkString();
	std::cout << "Enter the darkest secret of the new contact : ";
	dSecret = checkString();

	contact.addInfo(fName, lName, nName, pNumber, dSecret);

	return (contact);
}

std::string checkLenght(std::string str) {
	int nb;

	if (str.length() > 10) {
		nb = str.length() - 10;
		for (int i = 0; i <= nb; i++) 
			str.pop_back();
		str.append(1, '.');
	}
	else {
		while (str.length() < 10)
			str.insert(0, " ");
	}
	return (str);
}

void affContact(PhoneBook phoneBook) {
	std::string input;
	int index;
	
	while (true) {
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (input.empty()) {
			std::cout << "The field can't be left empty!" << std::endl;
			std::cout << "Try again : ";
		}
		else if (input == "1" || input == "2" || input == "3" || input == "4" || input == "5" || input == "6" || input == "7" || input == "8") {
			break;
		}
		else {
			std::cout << "Index not valid!" << std::endl;
			std::cout << "Try again : ";
		}
	}
	index = atoi(input.c_str()) - 1;
	std::cout << "\nFirst Name : " << phoneBook.getter(index).getFirstName() << std::endl;
	std::cout << "Last Name : " << phoneBook.getter(index).getLastName() << std::endl;
	std::cout << "Nickname : " << phoneBook.getter(index).getNickName() << std::endl;
	std::cout << "Phone Number : " << phoneBook.getter(index).getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << phoneBook.getter(index).getDarkestSecret() << std::endl;
}

void searchFunction(PhoneBook phoneBook) {
	std::string input;
	
	std::cout << "*********************************************" << std::endl;
	std::cout << "*     index|first name| last name|  nickname*" << std::endl;
	std::cout << "*********************************************" << std::endl;
	std::cout << "*" << checkLenght("1") << "|" << checkLenght(phoneBook.getter(0).getFirstName()) << "|" << checkLenght(phoneBook.getter(0).getLastName()) << "|" << checkLenght(phoneBook.getter(0).getNickName()) << "*" << std::endl;
	std::cout << "*" << checkLenght("2") << "|" << checkLenght(phoneBook.getter(1).getFirstName()) << "|" << checkLenght(phoneBook.getter(1).getLastName()) << "|" << checkLenght(phoneBook.getter(1).getNickName()) << "*" << std::endl;
	std::cout << "*" << checkLenght("3") << "|" << checkLenght(phoneBook.getter(2).getFirstName()) << "|" << checkLenght(phoneBook.getter(2).getLastName()) << "|" << checkLenght(phoneBook.getter(2).getNickName()) << "*" << std::endl;
	std::cout << "*" << checkLenght("4") << "|" << checkLenght(phoneBook.getter(3).getFirstName()) << "|" << checkLenght(phoneBook.getter(3).getLastName()) << "|" << checkLenght(phoneBook.getter(3).getNickName()) << "*" << std::endl;
	std::cout << "*" << checkLenght("5") << "|" << checkLenght(phoneBook.getter(4).getFirstName()) << "|" << checkLenght(phoneBook.getter(4).getLastName()) << "|" << checkLenght(phoneBook.getter(4).getNickName()) << "*" << std::endl;
	std::cout << "*" << checkLenght("6") << "|" << checkLenght(phoneBook.getter(5).getFirstName()) << "|" << checkLenght(phoneBook.getter(5).getLastName()) << "|" << checkLenght(phoneBook.getter(5).getNickName()) << "*" << std::endl;
	std::cout << "*" << checkLenght("7") << "|" << checkLenght(phoneBook.getter(6).getFirstName()) << "|" << checkLenght(phoneBook.getter(6).getLastName()) << "|" << checkLenght(phoneBook.getter(6).getNickName()) << "*" << std::endl;
	std::cout << "*" << checkLenght("8") << "|" << checkLenght(phoneBook.getter(7).getFirstName()) << "|" << checkLenght(phoneBook.getter(7).getLastName()) << "|" << checkLenght(phoneBook.getter(7).getNickName()) << "*" << std::endl;
	std::cout << "*********************************************" << std::endl;
	std::cout << "Enter the index of the contact : ";
	affContact(phoneBook);
}

int main() {
	std::string input;
	PhoneBook phoneBook;

	phoneBook.count = 0;
	while (true) {
		std::cout << "\n******************************************\n* ADD : To add a new contact(max of 8).  *\n* SEARCH : To search the list of contact.*\n* EXIT : To exit.                        *\n******************************************\n\n> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (input == "EXIT")
			break;
		if (input == "ADD")
			phoneBook.adder(creatContact());
		if (input == "SEARCH")
			searchFunction(phoneBook);
	}
	
	return 0;
}
