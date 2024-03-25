/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:06:36 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:06:37 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap James("James");
	ClapTrap Lincoln("Lincoln");

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
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
    Lincoln.attack(James.getName());
	James.takeDamage(Lincoln.getAttackDamage());
	
    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	James.beRepaired(5);

    std::cout << "----------xx----------xx----------xx----------" << std::endl;
	Lincoln.attack(James.getName());

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

	return (0);
}