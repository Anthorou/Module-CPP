/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:41:35 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/25 15:47:42 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap bob("Bobby");
	
	bob.attack("james");
	bob.beRepaired(10);
	
	std::cout << "life left : " << bob.getHitPoints() << std::endl;
	bob.takeDamage(5);

	std::cout << "life left : " << bob.getHitPoints() << std::endl;
	bob.takeDamage(5);

	std::cout << "life left : " << bob.getHitPoints() << std::endl;
	bob.beRepaired(5);
	std::cout << "life left : " << bob.getHitPoints() << std::endl;
	std::cout << "energy left : " << bob.getEnergy() << std::endl;
	
	bob.attack("james");
	bob.attack("james");
	bob.attack("james");
	bob.attack("james");
	bob.attack("james");
	
	std::cout << "energy left : " << bob.getEnergy() << std::endl;
	bob.attack("james");

	return (0);
}