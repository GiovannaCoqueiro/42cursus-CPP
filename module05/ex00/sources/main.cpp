/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:03 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 16:24:46 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat1("Sage", 10);
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.decrementGrade();
        std::cout << bureaucrat1 << std::endl;

        Bureaucrat bureaucrat2("Phoenix", 150);
        std::cout << bureaucrat2 << std::endl;

		Bureaucrat bureaucrat3("Jett", 160);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return (0);
}