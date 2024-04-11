/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:13:04 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:13:06 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>

enum Type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	POS_INF,
	NEG_INF,
	TNAN,
	INVALID
};

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& rhs);
        ~ScalarConverter();
        ScalarConverter& operator=(const ScalarConverter& rhs);

    public:
        static void convert(const std::string& str);
};

void printImpossible();
void printNan();
void printInf(Type type);
void printFloat(std::string const& str);
void printInt(std::string const& str);
void printChar(std::string const& str);
Type detectType(std::string const& str);

#endif