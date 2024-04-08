/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:37 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 13:50:35 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	protected:
		const std::string _name;
		bool _signed;
        const int _signGrade;
        const int _executeGrade;

    public:
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

        class GradeTooHighException : public std::exception {
	        public:
		        virtual const char* what() const throw();
        };

		AForm();
		AForm(std::string const name, int signGrade, int executeGrade)
			throw(GradeTooHighException, GradeTooLowException);
		AForm(const AForm& rhs);
		~AForm();
		AForm& operator=(const AForm& rhs);

        const std::string getName() const;
		bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat& bureaucrat)
            throw(GradeTooLowException) = 0;
};

std::ostream& operator<<(std::ostream& lhs, const Form& rhs);

#endif