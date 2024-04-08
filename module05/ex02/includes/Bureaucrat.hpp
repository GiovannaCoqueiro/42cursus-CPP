/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:42 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 15:01:49 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;

    public:
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

        class GradeTooHighException : public std::exception {
	        public:
		        virtual const char* what() const throw();
        };

		Bureaucrat();
		Bureaucrat(const std::string name, int grade)
			throw(GradeTooHighException, GradeTooLowException);
		Bureaucrat(const Bureaucrat& rhs);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& rhs);

		int getGrade() const;
		const std::string getName() const;

		void incrementGrade();
		void decrementGrade();
		void signForm(AForm& form);
		void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs);

#endif