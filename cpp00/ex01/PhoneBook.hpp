/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:09:09 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/11 17:10:17 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <string>

class PhoneBook {
	
public:

	int count;

	PhoneBook(void);
	~PhoneBook(void);
	
	void adder(Contact contact);
	Contact getter(int index) const;
	
private:

	Contact _contacts[8];
	
};

#endif
