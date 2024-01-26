/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:53:16 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/25 17:15:09 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
public :

	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(ScavTrap const &cpy);
	ScavTrap(std::string const & name);

	ScavTrap & operator=(ScavTrap const &rhs);

	void attack(const std::string &target);

	void guardGate(void);
};
