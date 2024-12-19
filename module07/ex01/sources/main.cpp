/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:59 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/12/19 15:45:49 by gcoqueir         ###   ########.fr       */
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
	int intArray[] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45};
	float floatArray[] = {1.5, 2.4, 3.3, 4.2, 5.1};
	std::string stringArray[] = {"Raze", "Sage", "Viper"};

	std::cout << "Int:\n";
	iter<int>(intArray, 5, printInt);
	std::cout << std::endl;

	std::cout << "Float:\n";
	iter<float>(floatArray, 5, printFloat);
	std::cout << std::endl;

	std::cout << "String:\n";
	iter<std::string>(stringArray, 3, printString);
	std::cout << std::endl;

	return (0);
}