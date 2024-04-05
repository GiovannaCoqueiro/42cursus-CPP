/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:10:33 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:53:10 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    _type = "AAnimal";
    std::cout << "AAnimal has been constructed." << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs) {
    std::cout << "Animal copied."  << std::endl;
    *this = rhs;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destroyed." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string AAnimal::getType() const {
    return (_type);
}

void AAnimal::setType(std::string type) {
    _type = type;
}