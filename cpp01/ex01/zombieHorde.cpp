/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:05:18 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/12 16:19:57 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombies[i].addName(name);
	}

	return (zombies);
}
