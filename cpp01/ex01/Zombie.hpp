/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:20:57 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/12 16:18:34 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
	
public :

	Zombie(void);
	~Zombie(void);

	void announce(void);
	void addName(std::string name);
	
private :

	std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif