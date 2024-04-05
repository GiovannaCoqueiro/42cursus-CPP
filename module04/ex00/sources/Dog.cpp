/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:30 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:34:54 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	setType("Dog");
    std::cout << "Dog has been constructed." << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs) {
	std::cout << _type << " copied."  << std::endl;
    *this = rhs;
}

Dog::~Dog() {
    std::cout << "Dog destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Au Au" << std::endl;
}