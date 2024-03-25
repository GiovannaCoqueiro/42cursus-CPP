/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:04:52 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:04:53 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _rawBits;
        static const int _fractBits = 8;

    public:
        Fixed();
        Fixed(int const num);
        Fixed(float const num);
        Fixed(const Fixed& other);
        ~Fixed();
        Fixed& operator=(const Fixed& other);

        void setRawBits(int const raw);
        int getRawBits() const;
        float toFloat() const;
        int toInt() const;
};

std::ostream& operator<<(std::ostream &lhs, const Fixed& rhs);

#endif