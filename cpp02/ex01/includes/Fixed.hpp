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