/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:16:05 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/11 17:11:21 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::adder(Contact contact) {
	if (this->count == 8)
		this->count = 0;
	this->_contacts[this->count] = contact;
	this->count++;
}

Contact PhoneBook::getter(int index) const {
	return (this->_contacts[index]);
}
