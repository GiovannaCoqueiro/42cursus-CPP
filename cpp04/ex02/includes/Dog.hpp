/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:10:15 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:10:16 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {
    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog& rhs);
        ~Dog();
        Dog& operator=(const Dog& rhs);
        
        Brain* getBrain() const;

        void makeSound() const;
};

#endif