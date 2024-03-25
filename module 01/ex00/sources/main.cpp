/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:30:51 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/14 14:41:08 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* zombieHeap;
	Zombie zombieStack;

    std::cout <<"Object Zombie with no other function test:" << std::endl;
	zombieStack.setName("Gon");
	zombieStack.announce();
    std::cout << std::endl;

	std::cout << "Heap allocated Zombie with newZombie test:" << std::endl;
	zombieHeap = newZombie("Killua");
	zombieHeap->announce();
	delete zombieHeap;
    std::cout << std::endl;

	std::cout << "Stack allocated Zombie with randomChump test:" << std::endl;
	randomChump("Kurapika");
}