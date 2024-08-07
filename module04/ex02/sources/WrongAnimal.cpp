/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:34 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:34:59 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    _type = "WrongAnimal";
    std::cout << "WrongAnimal has been constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) {
    std::cout << _type << " copied."  << std::endl;
    *this = rhs;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string WrongAnimal::getType() const {
    return (_type);
}

void WrongAnimal::setType(std::string type) {
    _type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "* " << _type << " makes a prililim sound *" << std::endl;
}