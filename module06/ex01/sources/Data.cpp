#include "Data.hpp"

Data::Data() {
    std::cout << "Data has been constructed." << std::endl;
}

Data::Data(const Data& rhs) {
    std::cout << "Data copied." << std::endl;
    *this = rhs;
}

Data::~Data() {
    std::cout << "Data destroyed." << std::endl;
}

Data& Data::operator=(const Data& rhs) {
    if (this != &rhs)
        _data = rhs._data;
    return (*this);
}

uint32_t Data::getData() const {
    return (_data);
}

void Data::setData(uint32_t data) {
    _data = data;
}