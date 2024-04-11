/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:21:26 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/11 14:18:37 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) {
	std::deque<int> cont_deque;
	std::list<int>	cont_list;
	int				nb;

	for (int i = 1; i < argc; i++) {
		nb = std::atoi(argv[i]);
		if (nb < 0)
			throw NegativeNumber();
		cont_deque.push_back(nb);
		cont_list.push_back(nb);
	}
	
	displayCont(cont_deque);
	displayCont(cont_list);

}

PmergeMe::~PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe & cpy) {
	*this = cpy;
}

PmergeMe & PmergeMe::operator=(const PmergeMe & rhs) {
	static_cast<void>(rhs);
	return (*this);
}

const char * PmergeMe::NegativeNumber::what() const throw() {
	return ("Error: Only positive integer are accepted.");
}

template<typename T>
void PmergeMe::displayCont(T &container) {
	typename T::iterator it;
	
	for (it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

