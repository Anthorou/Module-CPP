/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:21:26 by aroussea          #+#    #+#             */
/*   Updated: 2024/04/15 16:27:06 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) {
	std::deque<int>		cont_deque;
	std::vector<int>	cont_vector;
	int					nb;

	for (int i = 1; i < argc; i++) {
		nb = std::atoi(argv[i]);
		if (nb < 0)
			throw NegativeNumber();
		cont_deque.push_back(nb);
		cont_vector.push_back(nb);
	}
	
	std::cout << "Before : ";
	displayCont(cont_deque);

	clock_t time_deque_s = clock();
	fordJohnsonMergeInsertionSort(cont_deque, 0, cont_deque.size() - 1);
	clock_t time_deque_e = clock();
	
	clock_t time_vec_s = clock();
	fordJohnsonMergeInsertionSort(cont_vector, 0, cont_vector.size() - 1);
	clock_t time_vec_e = clock();

	std::cout << "After :  ";
	displayCont(cont_deque);

	double t_vec = static_cast<double>(time_vec_e - time_vec_s) / CLOCKS_PER_SEC * 1000;
	double t_deque = static_cast<double>(time_deque_e - time_deque_s) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << cont_vector.size() << " elements with std::vector : " << t_vec << " ms" << std::endl;
	std::cout << "Time to process a range of " << cont_deque.size() << " elements with std::deque : " << t_deque << " ms" << std::endl;
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
	int i = 0;
	
	for (it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
		i++;
		if (i == 20) {
			std::cout << "[...]" << std::endl;
			return ;
		}
	}
	std::cout << std::endl;
}

template <typename T>
void PmergeMe::insertionSort(T& container, int start, int end) {
    for (int i = start + 1; i <= end; ++i) {
        int key = container[i];
        int j = i - 1;
        while (j >= start && container[j] > key) {
            container[j + 1] = container[j];
            --j;
        }
        container[j + 1] = key;
    }
}

template <typename T>
void PmergeMe::merge(T& container, int start, int mid, int end) {
    T temp(end - start + 1);
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end) {
        if (container[i] < container[j])
            temp[k++] = container[i++];
        else
            temp[k++] = container[j++];
    }
    while (i <= mid)
        temp[k++] = container[i++];
    while (j <= end)
        temp[k++] = container[j++];
    for (int i = 0; i < k; ++i)
        container[start + i] = temp[i];
}

template <typename T>
void PmergeMe::fordJohnsonMergeInsertionSort(T& container, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        if (end - start + 1 <= 10) {
            insertionSort(container, start, end);
        } else {
            fordJohnsonMergeInsertionSort(container, start, mid);
            fordJohnsonMergeInsertionSort(container, mid + 1, end);
            merge(container, start, mid, end);
        }
    }
}
