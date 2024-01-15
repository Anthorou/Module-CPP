/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:35:50 by aroussea          #+#    #+#             */
/*   Updated: 2024/01/10 15:54:57 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

class Harl {
	
public :

	Harl(void);
	~Harl(void);

	void complain(std::string level);

private :

	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

};

#endif