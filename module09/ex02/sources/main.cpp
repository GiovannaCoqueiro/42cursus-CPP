/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:46 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:47 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 3) {
		std::cout << "Usage: ./pmergme [int] [int]" << std::endl;
		return 1;
	}
	PmergeMe pmm;
	try{
		clock_t start = clock();
		pmm.processInput(argv);
		clock_t end = clock();
		clock_t dataManageTime = end - start;
		pmm.printContainers(dataManageTime);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}