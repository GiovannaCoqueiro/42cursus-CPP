// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   Array.cpp                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/04/11 15:15:12 by gcoqueir          #+#    #+#             */
// /*   Updated: 2024/12/19 16:12:00 by gcoqueir         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "Array.hpp"

// template<typename T>
// Array<T>::Array() {
// 	std::cout <<"Empty array has been constructed."<< std::endl;
// 	this->_array = NULL;
// 	this->_size = 0;
// }

// template<typename T>
// Array<T>::Array(unsigned int n) {
// 	std::cout << "Array of size " << n << " has been constructed." << std::endl;
// 	this->_array = new T[n];
// 	for (unsigned int i = 0; i < n; i++)
// 		this->_array[i] = T();
// 	this->_size = n;
// }

// template<typename T>
// Array<T>::Array(const Array& rhs){
// 	std::cout << "Array copied." << std::endl;
// 	this->_array = NULL;
// 	*this = rhs;
// }

// template<typename T>
// Array<T>::~Array(){
// 	std::cout << "Array destroyed." << std::endl;
// 	if(this->_array != NULL)
// 		delete [] this->_array;
// }

// template<typename T>
// Array<T>& Array<T>::operator=(const Array& rhs) {
// 	if(this != &rhs) {
// 		if(this->_array != NULL)
// 			delete [] this->_array;
// 		this->_array = new T[rhs._size];
// 		for (unsigned int i = 0; i < rhs._size; i++)
// 			this->_array[i] = rhs._array[i];
// 		this->_size = rhs._size;
// 	}
// 	return *this;
// }

// template<typename T>
// T& Array<T>::operator[](unsigned int i) throw(std::out_of_range) {
// 	if (i >= this->_size)
// 		throw std::out_of_range("Index out of range");
// 	if(_array == NULL)
// 		throw std::out_of_range("Array is empty");
// 	return this->_array[i];
// }

// template<typename T>
// unsigned int Array<T>::size() const {
// 	return this->_size;
// }

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), length(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]()), length(n) {}

template <typename T>
Array<T>::Array(const Array& other) : elements(new T[other.length]()), length(other.length) {
    for (unsigned int i = 0; i < length; i++) {
        elements[i] = other.elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] elements;
        length = other.length;
        elements = new T[length]();
        for (unsigned int i = 0; i < length; i++) {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= length) {
        throw std::out_of_range("Index out of bounds");
    }
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= length) {
        throw std::out_of_range("Index out of bounds");
    }
    return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return length;
}

#endif
