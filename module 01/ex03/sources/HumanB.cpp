/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:38:11 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 11:38:12 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB() {}

std::string HumanB::getName() const {
    return (_name);
}

void HumanB::setName(std::string name) {
    this->_name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() {
    std::cout << getName() << " attacks with " << _weapon->getType() << std::endl; 
}