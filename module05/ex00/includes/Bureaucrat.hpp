/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:44:56 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/05 18:04:10 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>

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

		const std::string getName() const;
		int getGrade() const;

		void increaseGrade();
		void decreaseGrade();
		
};

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs);

#endif