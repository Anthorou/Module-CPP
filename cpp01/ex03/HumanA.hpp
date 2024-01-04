/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:52:43 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/04 15:23:34 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include "Weapon.hpp"

class HumanA {
	
public :

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void attack() const;

private :

	Weapon& _weapon;
	std::string _name;
	
};

#endif