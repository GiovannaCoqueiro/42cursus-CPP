/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:28 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 13:40:55 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("Sage", 2);
        std::cout << b1 << std::endl;

        b1.incrementGrade();
        std::cout << b1 << std::endl;

        b1.decrementGrade();
        std::cout << b1 << std::endl;

		Form form1("Form 1", 5, 15);
        std::cout << form1 << std::endl;

        b1.signForm(form1);
        std::cout << form1 << std::endl;

        Bureaucrat b2("Phoenix", 150);
        std::cout << b2 << std::endl;

        b2.signForm(form1);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return (0);
}