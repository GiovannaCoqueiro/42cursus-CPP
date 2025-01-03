/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& rhs) {
	*this = rhs;
}

RPN& RPN::operator=(const RPN& rhs) {
	if (this != &rhs) {
		_stack = rhs._stack;
	}
	return *this;
}

RPN::~RPN() {}

ssize_t RPN::calculate(const std::string& expr) {
	std::istringstream iss(expr);
	std::string token;
	int a, b = 0;

	while (iss >> token) {
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (_stack.size() < 2) {
				std::cerr << "Error" << std::endl;
				return -1;
			}
			b = _stack.top(); _stack.pop();
			a = _stack.top(); _stack.pop();

			if (token == "+") {
				_stack.push(a + b);
			}
			else if (token == "-") {
				_stack.push(a - b);
			}
			else if (token == "*") {
				_stack.push(a * b);
			}
			else if (token == "/") {
				if (b == 0) {
					std::cerr << "Error" << std::endl;
					return -1;
				}
				_stack.push(a / b);
			}
		}
		else {
			bool is_number = true;
			for (size_t i = 0; i < token.length(); i++) {
				if (!std::isdigit(token[i])) {
					is_number = false;
					break;
				}
			}

			if (is_number && token.length() == 1) {
				_stack.push(num);
			}
			else {
				std::cerr << "Error" << std::endl;
				return -1;
			}
		}
	}

	if (_stack.size() != 1) {
		std::cerr << "Error" << std::endl;
		return -1;
	}

	return _stack.top();
}