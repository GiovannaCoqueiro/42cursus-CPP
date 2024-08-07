/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:59 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:45:06 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    _type = "Animal";
    std::cout << "Animal has been constructed." << std::endl;
}

Animal::Animal(const Animal& rhs) {
    std::cout << "Animal copied."  << std::endl;
    *this = rhs;
}

Animal::~Animal() {
    std::cout << "Animal destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string Animal::getType() const {
    return (_type);
}

void Animal::setType(std::string type) {
    _type = type;
}

void Animal::makeSound() const {
	std::cout << "* " << _type << " makes a sound *" << std::endl;
}