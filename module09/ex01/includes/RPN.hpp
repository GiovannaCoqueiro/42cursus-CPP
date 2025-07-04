/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <exception>
#include <cstdlib>
#include <sstream>
#include <stdexcept>
#include <cctype>

class RPN {
	private:
		std::stack<int> _stack;

	public:
		RPN();
		RPN(const RPN& rhs);
		RPN& operator=(const RPN& rhs);
		~RPN();

		ssize_t calculate(const std::string& expr);
};

#endif