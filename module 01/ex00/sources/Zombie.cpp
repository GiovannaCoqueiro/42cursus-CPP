/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:14:35 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/14 14:27:36 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << getName() << " was destroyed" << std::endl;
}

std::string Zombie::getName() const {
	return (_name);	
}

void Zombie::setName(std::string name) {
	this->_name = name;	
}

void Zombie::announce( void ) {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}