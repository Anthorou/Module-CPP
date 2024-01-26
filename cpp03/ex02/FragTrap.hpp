/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:04:09 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/26 14:08:56 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	
public :

	FragTrap(void);
	~FragTrap(void);
	FragTrap(FragTrap const &cpy);
	FragTrap(std::string const &name);
	
	FragTrap & operator=(FragTrap const &rhs);
	
	void highFivesGuys(void);
};
