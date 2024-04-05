/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:07:03 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:07:04 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap James("James");
	ScavTrap Lincoln("Lincoln");

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
    James.takeDamage(Lincoln.getAttackDamage());
    Lincoln.attack(James.getName());
    James.takeDamage(Lincoln.getAttackDamage());

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.guardGate();

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

	return (0);
}