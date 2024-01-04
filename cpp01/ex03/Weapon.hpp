/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:41:05 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/04 15:02:13 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {

public : 

	Weapon(std::string type);
	~Weapon(void);

	std::string getType() const;
	void setType(std::string newType);
	
private :

	std::string _type;

};

#endif