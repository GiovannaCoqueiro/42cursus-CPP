/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {
	std::cout << "Default Span has been constructed." << std::endl;
}

Span::Span(unsigned int n) : size(n) {
	std::cout << "Span of size " << n << " has been constructed." << std::endl;
}

Span::Span(const Span& rhs) {
	*this = rhs;
}

Span::~Span() {
	std::cout << "Span destroyed." << std::endl;
}

Span& Span::operator=(const Span& rhs) {
	if (this != &rhs) {
		for (unsigned long i = 0; i < rhs.size; i++)
			this->numbers[i] = rhs.numbers[i];
		this->size = rhs.size;
	}
	return *this;
}

std::vector<int> Span::getNumber() {
	return this->numbers;
}

void Span::addNumber(int n) {
	if (numbers.size() >= size)
		throw AddFail();
	numbers.push_back(n);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (numbers.size() + std::distance(begin, end) > size)
		throw AddFail();
	numbers.insert(numbers.end(), begin, end);
}

int Span::shortestSpan() {
	if (numbers.size() < 2)
		throw ShortFail();

	std::vector<int> temp = numbers;
	std::sort(temp.begin(), temp.end());

	int min_span = temp[1] - temp[0];
	for (size_t i = 1; i < temp.size() - 1; ++i)
		min_span = std::min(min_span, temp[i + 1] - temp[i]);

	return min_span;
}

int Span::longestSpan() {
	if (numbers.size() < 2)
		throw LongFail();

	int max_span = *std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end());
	return max_span;
}