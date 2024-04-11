/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:46:44 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 16:50:58 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "Unknown ShrubberyCreationForm has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm with " << _target << " target has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : AForm("ShrubberyCreationForm", 145, 137), _target(rhs._target) {
	std::cout << "ShrubberyCreationForm copied." << std::endl;
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm with " << _target << " target destroyed." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
	if(this != &rhs) {
		AForm::operator=(rhs);
		const_cast<std::string&>(_target) = rhs._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
throw(GradeTooLowException, NotSignedException) {
	if (getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();

    std::ofstream outfile((_target + "_shrubbery").c_str(),outfile.out | outfile.trunc);
	if (outfile.fail() || outfile.is_open() == false)
		std::cout << "Couldn't open file." << std::endl;
    else {
        outfile << "    /\\    " << "    /\\    " << std::endl;
        outfile << "   /  \\   " << "   /  \\   " << std::endl;
        outfile << "  /    \\  " << "  /    \\  " << std::endl;
        outfile << " /______\\ " << " /______\\ " << std::endl;
        outfile << "    ||     " << "    ||     " << std::endl;
        outfile << "----------------------" << std::endl;
        outfile << "    /\\    " << "    /\\    " << std::endl;
        outfile << "   /  \\   " << "   /  \\   " << std::endl;
        outfile << "  /    \\  " << "  /    \\  " << std::endl;
        outfile << " /______\\ " << " /______\\ " << std::endl;
        outfile << "    ||     " << "    ||     " << std::endl;

        outfile.close();
    }
}