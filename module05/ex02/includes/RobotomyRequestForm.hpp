/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:44 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 17:01:12 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm {
	private:
		const std::string _target;

    public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

        void execute(Bureaucrat const & executor) const
			throw(GradeTooLowException,NotSignedException);
};

#endif