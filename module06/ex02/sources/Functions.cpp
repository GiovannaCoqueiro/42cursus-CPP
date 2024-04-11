/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:22 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:23 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

Base* generate(void) {
    srand(time(NULL));
    int num = rand() % 3;
    switch (num) {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
        default:
            return (NULL);
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "It's a pointer to a A object." << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "It's a pointer to a B object." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "It's a pointer to a C object." << std::endl;
    else if (p == NULL)
        std::cout << "This doesn't exist." << std::endl;
    else
        std::cout << "Unknown pointer type." << std::endl;
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "It's a reference to a A object." << std::endl;
        (void)a;
        return ;
    } catch (std::exception& e) {}

    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "It's a reference to a B object." << std::endl;
        (void)b;
        return ;
    } catch (std::exception& e) {}

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "It's a reference to a C object." << std::endl;
        (void)c;
        return ;
    } catch (std::exception& e) {}
    
    std::cout << "Unknown reference type." << std::endl;
}