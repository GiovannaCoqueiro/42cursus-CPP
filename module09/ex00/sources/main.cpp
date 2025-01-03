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

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if(argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}

	std::ifstream filename;
	std::string file;
	std::string line;
	std::string date;
	double value;
	BitcoinExchange exchange;

	if (exchange.readDataBase("data.csv") == false)
		return 1;

	file = argv[1];
	filename.open(file.c_str());
	if(!filename.is_open()) {
		std::cerr << "Error: File not found" << std::endl;
		return 1;
	}

	std::getline(filename, line);
	if(line != "date | value") {
		std::cerr << "Error: Invalid dB format" << std::endl;
		return 1;	
	}

	while(getline(filename, line)) {
		date = line.substr(0, line.find(" | "));
		std::istringstream iss(line.substr(line.find(" | ") + 3, line.length()));
		iss >> value;
		if (value > 1000)
			std::cout << "Error: too large a number" << std::endl;
		else
			exchange.printDataBase(date, value);
	}

	return 0;
}