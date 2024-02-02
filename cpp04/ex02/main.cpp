/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:44:43 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 15:32:31 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ORANGE "\033[33m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main()
{
	const AAnimal *b = new Cat();

	b->makeSound();

	return 0;
}
