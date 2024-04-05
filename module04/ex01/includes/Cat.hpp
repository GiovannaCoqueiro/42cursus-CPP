/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:47 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 13:43:49 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const Cat& rhs);
        ~Cat();
        Cat& operator=(const Cat& rhs);
        
        Brain* getBrain() const;

        virtual void makeSound() const;
};

#endif