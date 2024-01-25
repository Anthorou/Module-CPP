/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:41:35 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/25 18:15:09 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ClapTrap bob("Bobby");
	ScavTrap ben("benja");

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

	ben.attack("john");
	bob.attack("john");
	ben.takeDamage(99);
	std::cout << ben.getHitPoints() << std::endl;
	ben.guardGate();

	return (0);
}