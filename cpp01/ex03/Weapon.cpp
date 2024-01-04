/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:44:41 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/04 15:02:34 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon(void) {
}

std::string Weapon::getType(void) const {
	return (this->_type);
}

void Weapon::setType(std::string newType) {
	this->_type = newType;
}
