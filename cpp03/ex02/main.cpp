/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:41:35 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 14:22:03 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap bob("Bobby");
	ScavTrap ben("benja");
	FragTrap john("Johnny");

	std::cout << bob.getName() << " ";
	std::cout << bob.getHitPoints() << " ";
	std::cout << bob.getEnergy() << " ";
	std::cout << bob.getAttackD();
	std::cout << std::endl;

	std::cout << ben.getName() << " ";
	std::cout << ben.getHitPoints() << " ";
	std::cout << ben.getEnergy() << " ";
	std::cout << ben.getAttackD();
	std::cout << std::endl;

	std::cout << john.getName() << " ";
	std::cout << john.getHitPoints() << " ";
	std::cout << john.getEnergy() << " ";
	std::cout << john.getAttackD();
	std::cout << std::endl;

	ben.attack("john");
	bob.attack("john");
	john.attack("jimmy");
	
	ben.takeDamage(99);
	std::cout << "ScavTrap hit points left : " << ben.getHitPoints() << std::endl;
	ben.guardGate();

	john.takeDamage(53);
	std::cout << "FragTrap hit points left : " << john.getHitPoints() << std::endl;
	john.highFivesGuys();

	return (0);
}