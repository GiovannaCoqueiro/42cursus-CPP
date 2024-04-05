/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:10:38 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:53:50 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal() {
    setType("Cat");
	_brain = new Brain();
    std::cout << "Cat has been constructed." << std::endl;
}

Cat::Cat(const Cat& rhs) : AAnimal(rhs) {
	std::cout << _type << " copied."  << std::endl;
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