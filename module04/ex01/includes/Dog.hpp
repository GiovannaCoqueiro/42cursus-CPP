/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:50 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:44:02 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog& rhs);
        ~Dog();
        Dog& operator=(const Dog& rhs);
        
        Brain* getBrain() const;

        virtual void makeSound() const;
};

#endif