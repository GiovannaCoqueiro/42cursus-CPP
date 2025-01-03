// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   Array.hpp                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/04/11 15:15:09 by gcoqueir          #+#    #+#             */
// /*   Updated: 2024/12/19 17:36:29 by gcoqueir         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <cstddef>
#include <iostream>

template <typename T>
class Array {
private:
	T* _array;
	unsigned int _length;

public:
	Array();
	explicit Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();

	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	unsigned int size() const;
};

#include "Array.tpp"

#endif