/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:46:41 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 16:58:17 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "Unknown PresidentialPardonForm has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm with " << _target << " target has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) : AForm("PresidentialPardonForm", 25, 5), _target(rhs._target) {
	std::cout << "PresidentialPardonForm copied." << std::endl;
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm with " << _target << " target destroyed." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
	if(this != &rhs) {
		AForm::operator=(rhs);
		const_cast<std::string&>(_target) = rhs._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
throw(GradeTooLowException, NotSignedException) {
	if (getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}