/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:20:49 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/12 16:27:55 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {
	Zombie* zombies;
	int N = 3;

	zombies = zombieHorde(N, "johnny");

	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}
	std::cout << std::endl;
	
	zombies[2].addName("brian");

	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}
	
	delete[] zombies;
	return (0);
}
