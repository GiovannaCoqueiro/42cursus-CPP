/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:38:06 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 11:38:07 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
    _name = name;
    _weapon = &weapon;
}

HumanA::~HumanA() {}

std::string HumanA::getName() const {
    return (_name);
}

void HumanA::setName(std::string name) {
    this->_name = name;
}

void HumanA::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanA::attack() {
    std::cout << getName() << " attacks with " << _weapon->getType() << std::endl; 
}