#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "ScalarConverter has been constructed." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs) {
    std::cout << "ScalarConverter copied." << std::endl;
    *this = rhs;
}

ScalarConverter:::~ScalarConverter() {
    std::cout << "ScalarConverter destroyed." << std::endl;
}

ScalarConverter::ScalarConverter& operador=(const ScalarConverter& rhs) {
    (void)rhs;
    return (*this);
}

void ScalarConverter::converter(std::string const& str) {
	size_t start = str.find_first_not_of(" \t");
	size_t end = str.find_last_not_of(" \t");

	if (start != std::string::npos && end != std::string::npos) {
		const_cast<std::string&>(str) = str.substr(start, end - start + 1);
	} else if (start != std::string::npos) {
		const_cast<std::string&>(str) = str.substr(start);
	} else if (end != std::string::npos) {
		const_cast<std::string&>(str) = str.substr(0, end + 1);
	}

	Types type = detectType(str);
	switch (type) {
		case INVALID:
			printImpossible();
			break;
		case TNAN:
			printNan();
			break;
		case NINF:
		case PINF:
			printInf(type);
			break;
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
	}
}