/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:10:40 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:53:53 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
    setType("Dog");
	_brain = new Brain();
    std::cout << "Dog has been constructed." << std::endl;
}

Dog::Dog(const Dog& rhs) : AAnimal(rhs) {
	std::cout << _type << " copied."  << std::endl;
	_brain = new Brain();
    *this = rhs;
}

Dog::~Dog() {
	delete _brain;
    std::cout << "Dog destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	if(this != &rhs) {
		_type = rhs._type;
		*_brain = *(rhs._brain);
	}
	return (*this);
}

Brain* Dog::getBrain() const {
	return (_brain);
}

void Dog::makeSound() const {
	std::cout << "Au Au" << std::endl;
}