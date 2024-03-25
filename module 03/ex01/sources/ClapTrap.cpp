/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:07:00 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:07:01 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    _name = "Unknown";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " has been constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " has been constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs) {
    *this = rhs;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	if(this != &rhs) {
		_name = rhs.getName();
		_hitPoints = rhs.getHitPoints();
		_energyPoints = rhs.getEnergyPoints();
		_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

std::string ClapTrap::getName() const {
    return (_name);
}

int ClapTrap::getHitPoints() const {
    return (_hitPoints);
}

int ClapTrap::getEnergyPoints() const {
    return (_energyPoints);
}

int ClapTrap::getAttackDamage() const {
    return (_attackDamage);
}

void ClapTrap::setName(std::string name) {
    _name = name;
}

void ClapTrap::setHitPoints(int hit) {
    _hitPoints = hit;
}

void ClapTrap::setEnergyPoints(int energy) {
    _energyPoints = energy;
}

void ClapTrap::setAttackDamage(int attack) {
    _attackDamage = attack;
}

void ClapTrap::attack(const std::string& target) {
    if(_hitPoints < 1) {
		std::cout << "ClapTrap " << _name <<" is already dead!" << std::endl;
		return ;
	}
	if(_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " damage points!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if(_hitPoints < 1) {
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " has taken " << amount << " damage points!" << std::endl;
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(_hitPoints < 1) {
		std::cout << "ClapTrap " << _name <<" is already dead!" << std::endl;
		return ;
	}
	if(_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
    std::cout << "ClapTrap " << _name << " repaired " << amount << " health points!" << std::endl;
	_hitPoints += amount; 
	_energyPoints--;
}