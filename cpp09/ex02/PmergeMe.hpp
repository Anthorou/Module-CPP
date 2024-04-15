/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:21:24 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/15 15:37:44 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <ctime>

class PmergeMe {
	
public:

	PmergeMe(int argc, char **argv);
	~PmergeMe(void);
	PmergeMe(const PmergeMe & cpy);

	PmergeMe & operator=(const PmergeMe & rhs);
	
	template<typename T>
	void	displayCont(T &container);

	template <typename T>
	void merge(T& container, int start, int mid, int end);
	
	template <typename T>
	void insertionSort(T& container, int start, int end);
	
	template <typename T>
	void fordJohnsonMergeInsertionSort(T& container, int start, int end);

	class NegativeNumber: public std::exception {
		public:
			virtual const char *what() const throw();
	};
	
};