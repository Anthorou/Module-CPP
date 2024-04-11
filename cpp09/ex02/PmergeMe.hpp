/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:21:24 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 14:13:39 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <list>

class PmergeMe {
	
public:

	PmergeMe(int argc, char **argv);
	~PmergeMe(void);
	PmergeMe(const PmergeMe & cpy);

	PmergeMe & operator=(const PmergeMe & rhs);
	
	template<typename T>
	void	displayCont(T &container);
	
	void	mergeInsertDeque(std::deque<int> &lst);
	void	mergeInsertList(std::list<int> &lst);

	class NegativeNumber: public std::exception {
		public:
			virtual const char *what() const throw();
	};
	
};