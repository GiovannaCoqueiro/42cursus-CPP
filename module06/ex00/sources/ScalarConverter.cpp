#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "ScalarConverter has been constructed." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs) {
    std::cout << "ScalarConverter copied." << std::endl;
    *this = rhs;
}

ScalarConverter::~ScalarConverter() {
    std::cout << "ScalarConverter destroyed." << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) {
    (void)rhs;
    return (*this);
}

void ScalarConverter::convert(std::string const& str) {
	size_t start = str.find_first_not_of(" \t");
	size_t end = str.find_last_not_of(" \t");

	if (start != std::string::npos && end != std::string::npos)
		const_cast<std::string&>(str) = str.substr(start, end - start + 1);
	else if (start != std::string::npos)
		const_cast<std::string&>(str) = str.substr(start);
	else if (end != std::string::npos)
		const_cast<std::string&>(str) = str.substr(0, end + 1);

	Type type = detectType(str);
	switch (type) {
		case CHAR:
			printChar(str);
			break;
		case INT:
			printInt(str);
			break;
		case FLOAT:
		case DOUBLE:
			printFloat(str);
			break;
		case INVALID:
			printImpossible();
			break;
		case TNAN:
			printNan();
			break;
		case NEG_INF:
		case POS_INF:
			printInf(type);
			break;
	}
}

// #include "ScalarConverter.hpp"
// #include <iostream>

// Type detectType(std::string const& str);
// void printImpossibility(void);
// void printNan(void);
// void printInf(Type type);
// void printChar(std::string const& str);
// void printFloating(std::string const& str);
// void printInteger(std::string const& str);

// /* TRUCTORS ================================================================= */

// ScalarConverter::ScalarConverter(void) {};

// ScalarConverter::ScalarConverter(ScalarConverter const& that)
// {
// 	*this = that;
// }

// ScalarConverter::~ScalarConverter(void) {};

// /* OPERATORS ================================================================ */

// ScalarConverter& ScalarConverter::operator=(ScalarConverter const& that)
// {
// 	(void)that;
// 	return (*this);
// }

// /* METHODS ================================================================== */

// void ScalarConverter::convert(std::string const& str)
// {
// 	size_t start = str.find_first_not_of(" \t");
// 	size_t end = str.find_last_not_of(" \t");

// 	if (start != std::string::npos && end != std::string::npos) {
// 		const_cast<std::string&>(str) = str.substr(start, end - start + 1);
// 	} else if (start != std::string::npos) {
// 		const_cast<std::string&>(str) = str.substr(start);
// 	} else if (end != std::string::npos) {
// 		const_cast<std::string&>(str) = str.substr(0, end + 1);
// 	}

// 	Type type = detectType(str);
// 	switch (type) {
// 		case INVALID:
// 			printImpossibility();
// 			break;
// 		case TNAN:
// 			printNan();
// 			break;
// 		case NEG_INF:
// 		case POS_INF:
// 			printInf(type);
// 			break;
// 		case DOUBLE:
// 		case FLOAT:
// 			printFloating(str);
// 			break;
// 		case INT:
// 			printInteger(str);
// 			break;
// 		case CHAR:
// 			printChar(str);
// 			break;
// 	}
// }