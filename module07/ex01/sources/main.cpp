/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:59 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/06/27 18:54:08 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int const &i) {
	std::cout << i << "\n";
}

void printFloat(float const &i) {
	std::cout << i << "\n";
}

void printString(std::string const &i) {
	std::cout << i << "\n";
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string stringArray[] = {"um", "dois", "três"};

	std::cout << "intArray:\n";
	iter<int>(intArray, 10, printInt);
	std::cout << std::endl;

	std::cout << "floatArray:\n";
	iter<float>(floatArray, 5, printFloat);
	std::cout << std::endl;

	std::cout << "stringArray:\n";
	iter<std::string>(stringArray, 3, printString);
	std::cout << std::endl;

	return (0);
}