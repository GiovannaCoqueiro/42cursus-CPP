/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:46:39 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 17:35:13 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Intern Raze;
    AForm* form1 = Raze.makeForm("shrubbery creation", "Skye");
    AForm* form2 = Raze.makeForm("robotomy request", "Kayo");
    AForm* form3 = Raze.makeForm("presidential pardon", "Omen");
    AForm* form4 = Raze.makeForm("Unknown form", "Reyna");

    delete form1;
    delete form2;
    delete form3;
    delete form4;

    return (0);
}