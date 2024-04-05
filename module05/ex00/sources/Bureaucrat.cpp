/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:00 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 18:21:27 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default Bureaucrat has been constructed." << std::endl;
	const_cast<std::string&>(_name) = "Unknown";
	_grade = (rand() % 150) + 1;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
throw(GradeTooHighException, GradeTooLowException) {
	std::cout << "Bureaucrat has been constructed." << std::endl;
    const_cast<std::string&>(_name) = name;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) {
	std::cout << "Bureaucrat copied." << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destroyed." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	if(this != &rhs) {
		const_cast<std::string&>(_name) = rhs._name;
		_grade = rhs._grade;
	}
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "This grade is too high. The grade must be between 1 and 150.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "This grade is too low. The grade must be between 1 and 150.";
}

const std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::increaseGrade() {
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decreaseGrade() {
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs) {
	lhs << rhs.getName() << ": grade " << rhs.getGrade();
	return lhs;
}