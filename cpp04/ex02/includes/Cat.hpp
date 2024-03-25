/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:10:17 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:10:18 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {
    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const Cat& rhs);
        ~Cat();
        Cat& operator=(const Cat& rhs);
        
        Brain* getBrain() const;

        void makeSound() const;
};

#endif