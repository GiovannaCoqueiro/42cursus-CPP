/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:07:05 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:07:06 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << getName() << " has been constructed." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << getName() << " has been constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs) {
    *this = rhs;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	if(this != &rhs) {
		_name = rhs.getName();
		_hitPoints = rhs.getHitPoints();
		_energyPoints = rhs.getEnergyPoints();
		_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
    if(getHitPoints() < 1) {
		std::cout << "ScavTrap " << getName() <<" is already dead!" << std::endl;
		return ;
	}
	if(getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << getName() << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " damage points!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " activated Gate Keeper mode!" << std::endl;
}