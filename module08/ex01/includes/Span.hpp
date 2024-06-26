/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <cstdlib>
#include <limits>

class AddFail: public std::exception {
	public:
		virtual const char* what() const throw();
};

class LongFail: public std::exception {
	public:
		virtual const char* what() const throw();
};

class ShortFail: public std::exception {
	public:
		virtual const char* what() const throw();
};

class Span {
	private:
		std::vector<int>	number;
		unsigned long	size;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& rhs);
		~Span(void);
		Span& operator=(const Span& rhs);
		void addNumber(int n) throw (AddFail);
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) throw (AddFail);
		int shortestSpan(void) throw (ShortFail);
		int longestSpan(void) throw (LongFail);
		std::vector<int> getNumber(void);
};

#endif