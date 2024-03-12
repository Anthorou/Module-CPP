/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:11:48 by aroussea          #+#    #+#             */
/*   Updated: 2024/03/12 17:28:55 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	if (!ptr)
		return (0);
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int main() {
	Data oui = {"hello", {1, 2}};
	
	std::cout << oui.str << std::endl;
	std::cout << oui.tab[0] << " " << oui.tab[1] << std::endl;

	oui = *deserialize(serialize(&oui));
	
	std::cout << oui.str << std::endl;
	std::cout << oui.tab[0] << " " << oui.tab[1] << std::endl;
	
	return (0);
}
