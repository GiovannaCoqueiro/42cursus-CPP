/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:01 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:02 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"

class Serializer {
    private:
        Serializer();
        Serializer(const Serializer& rhs);
        ~Serializer();
        Serializer& operator=(const Serializer& rhs);

    public:
        static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif