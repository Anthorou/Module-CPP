/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:43:24 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/25 18:15:53 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap {

public :
	
	ClapTrap(void);
	ClapTrap(ClapTrap const &cpy);
	ClapTrap(std::string const &name);
	~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap & operator=(ClapTrap const &rhs);

	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergy(void) const;
	int getAttackD(void) const;

protected :

	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	int _attackDamage;

};
