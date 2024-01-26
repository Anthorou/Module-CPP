/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:53:18 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/25 18:07:33 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "Default constructor ScavTrap called" << std::endl;
	_name = "no name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) {
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = cpy;
}

ScavTrap::ScavTrap(std::string const &name) {
	std::cout << "Name constructor ScavTrap called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackD();
	return (*this);
}

void ScavTrap::attack(std::string const &target) {
	if (this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else {
		if (this->_energyPoints == 0)
			std::cout << "ScavTrap " << _name << " can't attack, he doesn't have any ernergy left!" << std::endl;
		else
			std::cout << "ScavTrap " << _name << " can't attack, he's dead!" << std::endl;
	}
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " is in guard mode !" << std::endl;
}
