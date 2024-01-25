/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:55:35 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/25 17:15:33 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("no name"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name) , _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

std::string ClapTrap::getName(void) const {
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

int ClapTrap::getEnergy(void) const {
	return (this->_energyPoints);
}

int ClapTrap::getAttackD(void) const {
	return (this->_attackDamage);
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getAttackD();
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else {
		if (this->_energyPoints == 0)
			std::cout << "ClapTrap " << _name << " can't attack, he doesn't have any ernergy left!" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " can't attack, he's dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout << "ClapTrap " << _name << " repairs himself, healing himself with " << amount << " points!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
	else {
		if (this->_energyPoints == 0)
			std::cout << "ClapTrap " << _name << " can't repair himself, he doesn't have any ernergy left!" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " can't repair himself, he's dead!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energyPoints != 0 && this->_hitPoints != 0) {
		std::cout << "ClapTrap " << _name << " takes " << amount << " damages!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints -= amount;
	}
	else {
		if (this->_energyPoints == 0)
			std::cout << "ClapTrap " << _name << " can't take damage, he doesn't have any ernergy left!" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " can't take damage, he's dead!" << std::endl;
	}
}
