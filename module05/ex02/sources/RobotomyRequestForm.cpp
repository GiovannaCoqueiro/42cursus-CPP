/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:46:00 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 16:28:37 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "Unknown RobotomyRequestForm has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm with " << _target << " target has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs) : AForm("RobotomyRequestForm", 72, 45), _target(rhs._target) {
	std::cout << "RobotomyRequestForm copied." << std::endl;
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm with " << _target << " target destroyed." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
	if(this != &rhs) {
		AForm::operator=(rhs);
		const_cast<std::string&>(_target) = rhs._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
throw(GradeTooLowException, NotSignedException) {
    if(getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	srand(time(NULL));
	std::cout << "* Drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}