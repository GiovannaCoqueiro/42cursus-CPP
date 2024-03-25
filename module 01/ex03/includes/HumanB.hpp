/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:38:01 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 11:38:02 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        std::string getName() const;
        void setName(std::string name);
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif