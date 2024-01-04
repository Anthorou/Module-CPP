/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:20:49 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/12 15:56:59 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* zombieHeap;

	zombieHeap = newZombie("john");
	zombieHeap->announce();
	
	randomChump("antho");
	
	delete(zombieHeap);
	
	return (0);
}
