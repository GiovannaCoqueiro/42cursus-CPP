/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:09:01 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:09:02 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain has been constructed." << std::endl;
    for (unsigned int i = 0; i < 100; i++)
        _ideas[i] = "No idea";
}

Brain::Brain(const Brain& rhs) {
    *this = rhs;
}

Brain::~Brain() {
    std::cout << "Brain destroyed." << std::endl;
}

Brain& Brain::operator=(const Brain& rhs) {
	if(this != &rhs)
		for (unsigned int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
	return (*this);
}

std::string Brain::getIdea(unsigned int index) const {
    if (index < 100)
        return (_ideas[index]);
    else
        return ("* Idea out of range *");
}

void Brain::setIdea(unsigned int index, std::string idea) {
    if (index < 100)
        _ideas[index] = idea;
    else
        std::cout << "Out of range!" << std::endl;
}