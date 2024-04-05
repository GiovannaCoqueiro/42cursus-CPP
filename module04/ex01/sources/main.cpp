/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:09:08 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 14:06:53 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    Cat* cat = new Cat();
    Dog* dog = new Dog();
	
    std::cout << "----------xx----------xx----------xx----------" << std::endl;

    for (int i = 0; i < 101; i++) {
        cat->getBrain()->setIdea(i, "sleep on keyboard");
        dog->getBrain()->setIdea(i, "get my tail");
    }

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << cat->getType() << " is thinking about: "<< cat->getBrain()->getIdea(i) << std::endl;
        std::cout << dog->getType() << " is thinking about: "<< dog->getBrain()->getIdea(i) << std::endl;
    }

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

    std::cout << cat->getType() << " is thinking about: "<< cat->getBrain()->getIdea(100) << std::endl;
    std::cout << dog->getType() << " is thinking about: "<< dog->getBrain()->getIdea(100) << std::endl;

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

    delete cat;
    delete dog;

    return (0);
}