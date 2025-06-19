/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:05:06 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/03/25 12:05:07 by gcoqueir         ###   ########.fr       */
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

		static const Fixed min(const Fixed& num1, const Fixed& num2);
		static Fixed min(Fixed& num1, Fixed& num2);
		static const Fixed max(const Fixed& num1, const Fixed& num2);
		static Fixed max(Fixed& num1, Fixed& num2);
		bool operator>(const Fixed& rhs);
		bool operator<(const Fixed& rhs);
		bool operator>=(const Fixed& rhs);
		bool operator<=(const Fixed& rhs);
		bool operator==(const Fixed& rhs);
		bool operator!=(const Fixed& rhs);
		Fixed operator+(const Fixed& rhs);
		Fixed operator-(const Fixed& rhs);
		Fixed operator*(const Fixed& rhs);
		Fixed operator/(const Fixed& rhs);
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
};

std::ostream& operator<<(std::ostream &lhs, const Fixed& rhs);

#endif