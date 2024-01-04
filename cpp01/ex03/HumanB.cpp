/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:18:26 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/04 15:37:59 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) , _weapon(nullptr) {}

HumanB::HumanB(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {}

HumanB::~HumanB(void) {}

void HumanB::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon) {
	this->_weapon = &newWeapon;
}
