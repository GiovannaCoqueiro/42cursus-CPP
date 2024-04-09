#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& rhs);
        ~ScalarConverter();
        ScalarConverter& operador=(const ScalarConverter& rhs);

    public:
        static void converter(const std::string& str);
};

#endif