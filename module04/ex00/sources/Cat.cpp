/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:28 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:08:29 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    setType("Cat");
    std::cout << "Cat has been constructed." << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs) {
    *this = rhs;
}

Cat::~Cat() {
    std::cout << "Cat destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
	if(this != &rhs)
		_type = rhs._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miau Miau" << std::endl;
}