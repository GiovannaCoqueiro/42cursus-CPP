/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <exception>
#include <iterator>

class PmergeMe {
	private:
		std::vector<int> _intV;
		std::deque<int> _intD;
		int _straggler;

	public:
		bool has_straggler;

		PmergeMe();
		PmergeMe(const PmergeMe& rhs);
		PmergeMe& operator=(const PmergeMe& rhs);
		~PmergeMe();

		void processInput(char **argv);
		bool validateInput();
		void printContainers(clock_t dataManageTime);
		int catchVecStraggler(std::vector<int> &vec);
		int catchDeqStraggler(std::deque<int> &deq);
		std::vector<int> fordSortVec();
		std::deque<int> fordSortDeq();
	}
;

# endif