/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:04:55 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:04:56 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _rawBits = 0;
}

Fixed::Fixed(int const num) {
    std::cout << "Int constructor called" << std::endl;
    _rawBits = num << _fractBits;
}

Fixed::Fixed(float const num) {
    std::cout << "Float constructor called" << std::endl;
    _rawBits = (roundf(num * 256));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other)
		_rawBits = other.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}

int Fixed::getRawBits() const {
    return (_rawBits);
}

float Fixed::toFloat() const {
    return ((float)_rawBits / 256);
}

int Fixed::toInt() const {
    return (_rawBits >> _fractBits);
}

std::ostream &operator<<(std::ostream& lhs, const Fixed& rhs) {
	lhs << rhs.toFloat();
	return (lhs);
}