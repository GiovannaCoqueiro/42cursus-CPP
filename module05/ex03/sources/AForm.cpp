/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:46:33 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 16:57:27 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Unknown"), _signed(false), _signGrade((rand() % 150) + 1), _executeGrade((rand() % 150) + 1) {
    std::cout << "Unknown form has been constructed." << std::endl;
}

AForm::AForm(std::string const name, int signGrade, int executeGrade)
throw(GradeTooHighException, GradeTooLowException) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    std::cout << "Form has been constructed." << std::endl;
}

AForm::AForm(const AForm& rhs) : _name(rhs._name), _signed(rhs._signed), _signGrade(rhs._signGrade), _executeGrade(rhs._executeGrade) {
    std::cout << "Form copied." << std::endl;
}

AForm::~AForm() {
	std::cout << "Form destroyed." << std::endl;
}

AForm& AForm::operator=(const AForm& rhs) {
    if (this != &rhs) {
        const_cast<std::string&>(_name) = rhs._name;
        _signed = rhs._signed;
        const_cast<int&>(_signGrade) = rhs._signGrade;
	    const_cast<int&>(_executeGrade) = rhs._executeGrade;
    }
    return *this;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high. The grade must be between 1 and 150.";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low. The grade must be between 1 and 150.";
}

const char* AForm::NotSignedException::what() const throw() {
    return "Form not signed.";
}

const std::string AForm::getName() const {
	return _name;
}

bool AForm::getSigned() const {
	return _signed;
}

int AForm::getSignGrade() const {
	return _signGrade;
}

int AForm::getExecuteGrade() const {
	return _executeGrade;
}

void AForm::beSigned(const Bureaucrat& rhs)
throw(GradeTooLowException) {
	if (rhs.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	else
        _signed = true;
}

void AForm::execute(Bureaucrat const & executor) const
throw(GradeTooLowException, NotSignedException) {
	if (_signed == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > _executeGrade)
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& lhs, const AForm& rhs) {
    lhs << "Form: " << rhs.getName() << ", Sign Grade: " << rhs.getSignGrade()
       << ", Execute Grade: " << rhs.getExecuteGrade() << ", Signed: ";
        if (rhs.getSigned() == true)
            std::cout << "Yes";
        else
            std::cout << "No";
    return lhs;
}