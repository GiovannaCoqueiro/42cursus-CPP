/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:26 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 13:39:47 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unknown"), _signed(false), _signGrade((rand() % 150) + 1), _executeGrade((rand() % 150) + 1) {
    std::cout << "Unknown form has been constructed." << std::endl;
}

Form::Form(std::string const name, int signGrade, int executeGrade)
throw(GradeTooHighException, GradeTooLowException) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    std::cout << _name << " has been constructed." << std::endl;
}

Form::Form(const Form& rhs) : _name(rhs._name), _signed(rhs._signed), _signGrade(rhs._signGrade), _executeGrade(rhs._executeGrade) {
    std::cout << "Form copied." << std::endl;
}

Form::~Form() {
	std::cout << "Form destroyed." << std::endl;
}

Form& Form::operator=(const Form& rhs) {
    if (this != &rhs) {
        const_cast<std::string&>(_name) = rhs._name;
        _signed = rhs._signed;
        const_cast<int&>(_signGrade) = rhs._signGrade;
	    const_cast<int&>(_executeGrade) = rhs._executeGrade;
    }
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade is too high. The grade must be between 1 and 150.";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade is too low. The grade must be between 1 and 150.";
}

const std::string Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

int Form::getSignGrade() const {
	return _signGrade;
}

int Form::getExecuteGrade() const {
	return _executeGrade;
}

void Form::beSigned(const Bureaucrat& rhs)
throw(GradeTooLowException) {
	if (rhs.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else
        _signed = true;
}

std::ostream& operator<<(std::ostream& lhs, const Form& rhs) {
    lhs << "Form: " << rhs.getName() << ", Sign Grade: " << rhs.getSignGrade()
       << ", Execute Grade: " << rhs.getExecuteGrade() << ", Signed: ";
        if (rhs.getSigned() == true)
            std::cout << "Yes";
        else
            std::cout << "No";
    return lhs;
}