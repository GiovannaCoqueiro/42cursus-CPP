/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool dateCheck(std::string date);

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs){
	*this = rhs;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs) {
	if(this != &rhs)
		_exchange = rhs._exchange;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

double BitcoinExchange::getExchangeValue(std::string date) const {
	std::map<std::string, double>::const_iterator it = _exchange.lower_bound(date); //searches for the given date or the closest previously date
	if (it == _exchange.begin() && it->first != date)
		return 0; //returns 0 when the given date is lower than all of the database dates
	if (it != _exchange.begin() && it->first != date)
		return (--it)->second; //returns the closest date, when the given date doesn't exist
	return it->second;
}

bool BitcoinExchange::readDataBase(std::string filename) {
	std::ifstream db;
	std::string line;
	double value;

	db.open(filename.c_str());
	if(!db.is_open()) {
		std::cerr << "Error: File not found" << std::endl;
		return false;
	}

	std::getline(db, line);
	if(line != "date,exchange_rate") {
		std::cerr << "Error: Invalid dB format" << std::endl;
		return false;
	}

	while(getline(db, line)) {
		std::string date = line.substr(0, line.find(","));
		std::istringstream iss(line.substr(line.find(",") + 1, line.length()));
		iss >> value;
		createDataBase(date, value);
	}

	return true;
}

void BitcoinExchange::createDataBase(std::string date, double value) {
	_exchange[date] = value;
}

void BitcoinExchange::printDataBase(std::string date, double value) {
	if (!dateCheck(date)) {
		std::cout << "Error: bad input => " << date << std::endl;
		return;
	}

	double result = getExchangeValue(date) * value;

	if (result < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else
		std::cout << date << " => " << result << std::endl;
}

bool dateCheck(std::string date) {
	if(date.length() != 10) //invalide date length
		return false;
	else if(date.substr(4,1) != "-" || date.substr(7,1) != "-") //invalid date format yyyy-mm-dd
		return false;
	else if(date.substr(5,2) < "01" || date.substr(5,2) > "12") //month check
		return false;
	else if(date.substr(8,2) < "01" || date.substr(8,2) > "31") //day check
		return false;
	else if(date.substr(5,2) == "02" && date.substr(8,2) > "29") //february case
		return false;
	return true;
}