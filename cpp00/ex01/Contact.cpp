/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:18:37 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/11 15:57:52 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void Contact::addInfo(std::string f_Name, std::string l_Name, std::string nName, std::string pNumber, std::string dSecret) {
	this->_f_Name = f_Name;
	this->_l_Name = l_Name;
	this->_nickname = nName;
	this->_phoneNumber = pNumber;
	this->_darkestSecret = dSecret;
}

std::string Contact::getFirstName(void) const {
	return (this->_f_Name);
}

std::string Contact::getLastName(void) const {
	return (this->_l_Name);
}

std::string Contact::getNickName(void) const {
	return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}
