/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:09:03 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:09:04 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    setType("Cat");
	_brain = new Brain();
    std::cout << "Cat has been constructed." << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs) {
	_brain = new Brain();
    *this = rhs;
}

Cat::~Cat() {
	delete _brain;
    std::cout << "Cat destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
	if(this != &rhs) {
		_type = rhs._type;
		*_brain = *(rhs._brain);
	}
	return (*this);
}

Brain* Cat::getBrain() const {
	return (_brain);
}

void Cat::makeSound() const {
	std::cout << "Miau Miau" << std::endl;
}