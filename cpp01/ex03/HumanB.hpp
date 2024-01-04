/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:14:54 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/04 15:35:59 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <string>

class HumanB {
	
public :

	HumanB(std::string name);
	HumanB(std::string name, Weapon& weapon);
	~HumanB(void);

	void attack() const;
	void setWeapon(Weapon& newWeapon);

private :

	std::string _name;
	Weapon* _weapon;
	
};

#endif