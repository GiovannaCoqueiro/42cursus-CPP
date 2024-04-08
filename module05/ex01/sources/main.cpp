/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:28 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 16:24:10 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bureaucrat1("Sage", 2);
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.decrementGrade();
        std::cout << bureaucrat1 << std::endl;

		Form form1("Form 1", 5, 15);
        std::cout << form1 << std::endl;

        bureaucrat1.signForm(form1);
        std::cout << form1 << std::endl;

        Bureaucrat bureaucrat2("Phoenix", 150);
        std::cout << bureaucrat2 << std::endl;

        bureaucrat2.signForm(form1);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return (0);
}