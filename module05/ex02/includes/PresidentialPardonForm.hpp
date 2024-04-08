/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:45:39 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/08 17:01:10 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
	private:
		const std::string _target;

    public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& rhs);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

        void execute(Bureaucrat const & executor) const
			throw(GradeTooLowException,NotSignedException);
};

#endif