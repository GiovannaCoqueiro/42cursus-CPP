/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:38:13 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 11:38:14 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    _type = type;
}

Weapon::~Weapon() {}

std::string Weapon::getType() const {
    return (_type);
}

void Weapon::setType(std::string type) {
    this->_type = type;
}