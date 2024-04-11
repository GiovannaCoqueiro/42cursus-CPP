/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:59 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:15:00 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int const &i) {
	std::cout << i << " ";
}

void printFloat(float const &i) {
	std::cout << i << " ";
}

void printString(std::string const &i) {
	std::cout << i << " ";
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string stringArray[] = {"one", "two", "three", "four", "five"};

	std::cout << "intArray: ";
	iter<int>(intArray, 5, printInt);
	std::cout << std::endl;

	std::cout << "floatArray: ";
	iter<float>(floatArray, 5, printFloat);
	std::cout << std::endl;

	std::cout << "stringArray: ";
	iter<std::string>(stringArray, 5, printString);
	std::cout << std::endl;

	return (0);
}