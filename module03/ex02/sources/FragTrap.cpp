/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:07:37 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:07:38 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << getName() << " has been constructed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << getName() << " has been constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs) {
    *this = rhs;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " destroyed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	if(this != &rhs) {
		_name = rhs.getName();
		_hitPoints = rhs.getHitPoints();
		_energyPoints = rhs.getEnergyPoints();
		_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << getName() << " wants a High Five!" << std::endl;
}