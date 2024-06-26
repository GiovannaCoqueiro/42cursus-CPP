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

#include "RPN.hpp"

void remove_whitespaces(std::string& str) {
	size_t pos = str.find_first_not_of(" \t");

	str.erase(0, pos);
	pos = str.find_last_not_of(" \t");
	if (std::string::npos != pos)
		str.erase(pos + 1);
}

void remove_spaces(std::string& str) {
	std::string newStr = "";
	for (std::string::iterator it = str.begin(); it != str.end(); it++) {
		if (*it != ' ')
			newStr += *it;
	}
	str = newStr;
}

static bool bigger_than_ten(std::string& input) {
	for (std::string::iterator it = input.begin(); it != input.end(); it++) {
		if(isdigit(static_cast<int>(*it)) && *it > '0')
			if(it + 1 != input.end() && isdigit(static_cast<int>(*(it + 1))))
				return true;
	}
	return false;
}

static void validate_input(std::string& input) throw (std::invalid_argument){
	remove_whitespaces(input);
	if(input.empty())
		throw std::invalid_argument("Empty expression");
	else if (input.find_first_not_of("0123456789+-*/ ") != std::string::npos)
		throw std::invalid_argument("Invalid character in expression");
	else if (bigger_than_ten(input))
		throw std::invalid_argument("Number bigger than 10");
	remove_spaces(input);
}

int main(int argc, char **argv) {
	switch (argc) {
		case 2: {
			try {
				std::string input = argv[1];
				validate_input(input);
				RPN rpn;
				std::cout << rpn.calculate(input) << std::endl;
				break;
			}	catch (std::invalid_argument& e) {
				std::cout << e.what() << std::endl;
				return 	1;
			}	catch (std::domain_error& e) {
				std::cout << e.what() << std::endl;
				return 1;
			}	catch (std::exception& e) {
				std::cout << "Error: " << e.what() << std::endl;
				return 1;
			}
		}
		default:{
			std::cout << "Usage: " << argv[0] << " <RPN expression>" << std::endl;
			return 1;
		}
	}
	return 0;
}