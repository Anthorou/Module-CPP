/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:11:38 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/08 15:25:02 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {
	
public:

	Contact(void);
	~Contact(void);

	void addInfo(std::string f_Name, std::string l_Name, std::string nName, std::string pNumber, std::string dSecret);
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;

private:

	std::string _f_Name;
	std::string _l_Name;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
	
};

#endif