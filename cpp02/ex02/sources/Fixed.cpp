#include "Fixed.hpp"

Fixed::Fixed() {
    _rawBits = 0;
}

Fixed::Fixed(int const num) {
    _rawBits = num << _fractBits;
}

Fixed::Fixed(float const num) {
    _rawBits = (roundf(num * 256));
}

Fixed::Fixed(const Fixed& other) {
    *this = other;
}

Fixed::~Fixed() {
}

Fixed& Fixed::operator=(const Fixed& other) {
	if(this != &other)
		_rawBits = other.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}

int Fixed::getRawBits() const {
    return (_rawBits);
}

float Fixed::toFloat() const {
    return ((float)_rawBits / 256);
}

int Fixed::toInt() const {
    return (_rawBits >> _fractBits);
}

std::ostream &operator<<(std::ostream& lhs, const Fixed& rhs) {
	lhs << rhs.toFloat();
	return (lhs);
}

const Fixed Fixed::min(const Fixed& num1, const Fixed& num2) {
    if (num1._rawBits < num2._rawBits)
        return (num1);
    return (num2);
}

Fixed Fixed::min(Fixed& num1, Fixed& num2) {
    if (num1 < num2)
        return (num1);
    return (num2);
}

const Fixed Fixed::max(const Fixed& num1, const Fixed& num2) {
    if (num1._rawBits > num2._rawBits)
        return (num1);
    return (num2);
}

Fixed Fixed::max(Fixed& num1, Fixed& num2) {
    if (num1 > num2)
        return (num1);
    return (num2);
}

bool Fixed::operator>(const Fixed& rhs) {
    return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(const Fixed& rhs) {
    return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(const Fixed& rhs) {
    return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(const Fixed& rhs) {
    return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(const Fixed& rhs) {
    return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(const Fixed& rhs) {
    return (this->toFloat() != rhs.toFloat());
}

Fixed Fixed::operator+(const Fixed& rhs) {
	Fixed aux(this->toFloat() + rhs.toFloat());

    return (aux);
}

Fixed Fixed::operator-(const Fixed& rhs) {
    Fixed aux(this->toFloat() - rhs.toFloat());

    return (aux);
}

Fixed Fixed::operator*(const Fixed& rhs) {
    Fixed aux(this->toFloat() * rhs.toFloat());

    return (aux);
}

Fixed Fixed::operator/(const Fixed& rhs) {
    Fixed aux(this->toFloat() / rhs.toFloat());

    return (aux);
}

Fixed& Fixed::operator++(void) {
    _rawBits = _rawBits + 1;
    return (*this);
}

Fixed& Fixed::operator--(void) {
    _rawBits = _rawBits - 1;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed aux(*this);

	++(*this);
	return (aux);
}

Fixed Fixed::operator--(int) {
    Fixed aux(*this);

	--(*this);
	return (aux);
}
