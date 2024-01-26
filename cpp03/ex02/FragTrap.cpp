/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:04:06 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 14:20:55 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "Default constructor FragTrap called" << std::endl;
	_name = "no name";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &cpy) {
	std::cout << "Copy construtor FragTrap called" << std::endl;
	*this = cpy;
}

FragTrap::FragTrap(std::string const &name) {
	std::cout << "Name constructor FragTrap called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackD();
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap called high fives guys!" << std::endl;
}
