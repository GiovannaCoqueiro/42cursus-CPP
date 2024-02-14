/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:30:51 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/14 15:08:42 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int	hordeLength1 = 3;
	Zombie* zombieHorde1 = zombieHorde(hordeLength1, "Killua");;
	int	hordeLength2 = 5;
	Zombie* zombieHorde2 = zombieHorde(hordeLength2, "Gon");

	std::cout << "First zombie horde test:" << std::endl;
	for (int i = 0; i < hordeLength1; i++)
		zombieHorde1[i].announce();
    std::cout << std::endl;

	std::cout << "Second zombie horde test:" << std::endl;
	for (int i = 0; i < hordeLength2; i++)
		zombieHorde2[i].announce();
    std::cout << std::endl;

	delete[] zombieHorde1;
	delete[] zombieHorde2;
}