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

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <deque>

int main() {
	std::cout << YELLOW << "Testing with vector ========================================" << RESET << std::endl;
	std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	try {
		std::cout << GREEN << easyfind(v, 5) << RESET << std::endl;
		std::cout << GREEN << easyfind(v, 11) << RESET << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << "Value not found" << RESET << std::endl;
	}
	std::cout << YELLOW << "Testing with list ========================================" << RESET << std::endl;
	std::list<int> l;
	for (int i = 0; i < 10; i++) {
		l.push_back(i);
	}
	try {
		std::cout << GREEN << easyfind(l, 5) << RESET << std::endl;
		std::cout << GREEN << easyfind(l, 11) << RESET << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << "Value not found" << RESET << std::endl;
	}
	std::cout << YELLOW << "Testing with deque ========================================" << RESET << std::endl;
	std::deque<int> d;
	for (int i = 0; i < 10; i++) {
		d.push_back(i);
	}
	try {
		std::cout << GREEN << easyfind(d, 5) << RESET << std::endl;
		std::cout << GREEN << easyfind(d, 11) << RESET << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << "Value not found" << RESET << std::endl;
	}
	return 0;
}