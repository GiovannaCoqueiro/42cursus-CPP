/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:15:09 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/06/27 19:17:04 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
	private:
		T* _array;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& rhs);
		~Array();
		Array& operator=(const Array& rhs);
		Array& operator[](unsigned int i)
			throw(std::out_of_range);

		unsigned int size() const;
};

#endif