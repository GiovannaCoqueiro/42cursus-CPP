/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:09:29 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/14 14:25:09 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		std::string getName() const;
		void setName(std::string name);
		void announce( void );        
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif