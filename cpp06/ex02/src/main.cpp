/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:33:54 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/12 18:00:53 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include <cstdlib>
#include <ctime>

Base * generate(void) {
	std::srand(static_cast<unsigned int>(std::time(0)));
	int randomNb = std::rand() % 3;
	if (randomNb == 0) {
		Base *instance = new A();
		return (instance);
	} else if (randomNb == 1) {
		Base *instance = new B();
		return (instance);
	} else {
		Base *instance = new C();
		return (instance);
	}
}

void identify(Base* p) {
	if (A* ptr = dynamic_cast<A*>(p))
		std::cout << "I am A" << std::endl;
	else if (B* ptr = dynamic_cast<B*>(p))
		std::cout << "I am B" << std::endl;
	else if (C* ptr = dynamic_cast<C*>(p))
		std::cout << "I am C" << std::endl;
}

void identifyRef(Base& p) {
	
}

int main() {
	Base *p;
	
	p = generate();
	identify(p);

	return (0);
}
