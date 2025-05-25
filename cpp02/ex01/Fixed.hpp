#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fp;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float flp);
        Fixed (const Fixed& other);
        Fixed& operator=(const Fixed& other);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os,const Fixed& data);


#endif