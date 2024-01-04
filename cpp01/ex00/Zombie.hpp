/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:20:57 by aroussea          #+#    #+#             */
/*   Updated: 2023/12/12 15:53:03 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
	
public :

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);
	
private :

	std::string _name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif