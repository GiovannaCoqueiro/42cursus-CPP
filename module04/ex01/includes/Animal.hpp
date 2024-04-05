/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 14:03:53 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal& rhs);
        virtual ~Animal();
        Animal& operator=(const Animal& rhs);
        
        std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const;
};

#endif