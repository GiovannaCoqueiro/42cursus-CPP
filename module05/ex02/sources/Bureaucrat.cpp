/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:50 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 16:38:05 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Unknown bureaucrat has been constructed." << std::endl;
	const_cast<std::string&>(_name) = "Unknown";
	_grade = (rand() % 150) + 1;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
throw(GradeTooHighException, GradeTooLowException) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
    const_cast<std::string&>(_name) = name;
	std::cout << "Bureaucrat " << _name << " has been constructed." << std::endl;
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) {
	std::cout << "Bureaucrat copied." << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat " << _name << " destroyed." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	if(this != &rhs) {
		const_cast<std::string&>(_name) = rhs._name;
		_grade = rhs._grade;
	}
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade is too high. The grade must be between 1 and 150.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade is too low. The grade must be between 1 and 150.";
}

const std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(AForm& form) {
	try {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getName() << "." << std::endl;
    } catch (const std::exception& e) {
        std::cout << getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << "." << std::endl;
	} catch (std::exception & e) {
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs) {
	lhs << rhs.getName() << ": grade " << rhs.getGrade();
	return lhs;
}