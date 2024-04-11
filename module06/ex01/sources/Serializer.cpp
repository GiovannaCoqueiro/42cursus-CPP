/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:13:55 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:13:56 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
    std::cout << "Serializer has been constructed." << std::endl;
}

Serializer::Serializer(const Serializer& rhs) {
    std::cout << "Serializer copied." << std::endl;
    *this = rhs;
}

Serializer::~Serializer() {
    std::cout << "Serializer destroyed." << std::endl;
}

Serializer& Serializer::operator=(const Serializer& rhs) {
    (void)rhs;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}