/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:16 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 13:31:47 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
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

		Form();
		Form(std::string const name, int signGrade, int executeGrade)
			throw(GradeTooHighException, GradeTooLowException);
		Form(const Form& rhs);
		~Form();
		Form& operator=(const Form& rhs);

        const std::string getName() const;
		bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat& bureaucrat)
            throw(GradeTooLowException);
};

std::ostream& operator<<(std::ostream& lhs, const Form& rhs);

#endif