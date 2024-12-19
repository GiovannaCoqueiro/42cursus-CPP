/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:15:12 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/12/19 18:38:15 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _length(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _length(n) {}

template <typename T>
Array<T>::Array(const Array& other) : _array(new T[other._length]()), _length(other._length) {
    for (unsigned int i = 0; i < _length; i++) {
        _array[i] = other._array[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] _array;
        _length = other._length;
        _array = new T[_length]();
        for (unsigned int i = 0; i < _length; i++) {
            _array[i] = other._array[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _length) {
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _length) {
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _length;
}

#endif
