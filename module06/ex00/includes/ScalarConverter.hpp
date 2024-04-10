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