/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:50:03 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/29 15:07:21 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#define MAX_IDEAS 100

class Brain {
	
public :

	Brain(void);
	~Brain(void);
	Brain(Brain const &cpy);
	
	Brain & operator=(Brain const &rhs);

private :

	std::string _ideas[MAX_IDEAS];
	
};
