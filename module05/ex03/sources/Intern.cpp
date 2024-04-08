/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:46:37 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 17:35:42 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern has been constructed." << std::endl;
}

Intern::Intern(const Intern& rhs) {
	std::cout << "Intern copied." << std::endl;
	*this = rhs;
}

Intern::~Intern() {
	std::cout << "Intern destroyed." << std::endl;
}

Intern& Intern::operator=(const Intern& rhs) {
	(void)rhs;
	return *this;
}

AForm* Intern::makeForm(std::string form, std::string target) const {
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++) {
		if (form == forms[i]) {
			std::cout << "Intern creates " << form << std::endl;
			switch (i) {
				case 0:
					return (new ShrubberyCreationForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new PresidentialPardonForm(target));
			}
		}
	}
    std::cout << "Unknown form for interns." << std::endl;

    return (NULL);
}