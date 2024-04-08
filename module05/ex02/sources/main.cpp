/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:55 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 16:57:50 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    ShrubberyCreationForm shrubberyForm("Skye");
    RobotomyRequestForm robotomyForm("Kayo");
    PresidentialPardonForm pardonForm("Omen");

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

    Bureaucrat bureaucrat1("Killjoy", 1);
    Bureaucrat bureaucrat2("Viper", 150);

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

    try {
        bureaucrat1.signForm(shrubberyForm);
        bureaucrat1.executeForm(shrubberyForm);

        std::cout << "----------xx----------xx----------xx----------" << std::endl;

        bureaucrat1.signForm(robotomyForm);
        bureaucrat1.executeForm(robotomyForm);

        std::cout << "----------xx----------xx----------xx----------" << std::endl;

        bureaucrat1.signForm(pardonForm);
        bureaucrat1.executeForm(pardonForm);

        std::cout << "----------xx----------xx----------xx----------" << std::endl;

        bureaucrat2.signForm(shrubberyForm);
        bureaucrat2.executeForm(shrubberyForm);
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "----------xx----------xx----------xx----------" << std::endl;

    return (0);
}