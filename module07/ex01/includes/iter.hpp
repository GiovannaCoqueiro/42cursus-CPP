/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:56 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/06/27 18:45:35 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, size_t length, void (*f)(T const &)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template<typename T>
void iter(T const *array, size_t length, void (*f)(T const &)) {
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif