/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:37 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:37:47 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    _type = "WrongCat";
    std::cout << "WrongCat has been constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs) {
    std::cout << _type << " copied."  << std::endl;
    *this = rhs;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "* " << _type << " makes a bonk sound *" << std::endl;
}