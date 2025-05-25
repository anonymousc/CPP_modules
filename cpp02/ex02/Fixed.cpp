#include "Fixed.hpp"


Fixed::Fixed() : fp(0) {}

Fixed::Fixed(float const n) 
{
	fp = (int)roundf(n * (1 << bits));
}

Fixed::Fixed(const int data)
{
    this->fp = data << bits;
}

Fixed::Fixed(const Fixed &other)
{
    this->fp = other.fp;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->fp = other.getRawBits();
    return (*this);
}
bool Fixed::operator<(const Fixed& other)
{
    return (this->toFloat() < other.toFloat());
}
bool Fixed::operator>(const Fixed& other)
{
       return (this->toFloat() > other.toFloat());
}
bool Fixed::operator!=(const Fixed& other)
{
        return (this->toFloat() != other.toFloat());
}

bool Fixed::operator>=(const Fixed& other)
{
        return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed& other)
{
       return (this->toFloat() == other.toFloat());
}

bool Fixed::operator==(const Fixed& other)
{
       return (this->toFloat() == other.toFloat());
}

float Fixed::operator/(const Fixed& other)
{
    return ((float)this->fp / other.getRawBits());
}

float Fixed::operator*(const Fixed& other)
{
    return (this->toFloat() * other.toFloat());
}

float Fixed::operator+(const Fixed& other)
{
    return (this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed& other)
{
    return (this->toFloat() - other.toFloat());
}

Fixed    Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->fp++;
    return (tmp);
}

Fixed Fixed::operator++()
{
	++this->fp;
    return (*this);
}
Fixed Fixed::operator--()
{
    this->fp--;
    return (*this);
}

Fixed  Fixed::operator--(int)
{
    Fixed tmp = *this;
    --this->fp;
    return (tmp);
}

Fixed &Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed1 < fixed2)
        return (fixed1);
    return (fixed2);  
}

Fixed &Fixed::max(Fixed &fixed1, Fixed& fixed2)
{
    if (fixed1 > fixed2)
        return (fixed1);
    return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1,const Fixed& fixed2)
{
    if (fixed1.fp < fixed2.fp)
        return (fixed1);
    return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1,const Fixed& fixed2)
{
    if (fixed1.fp > fixed2.fp)
        return (fixed1);
    return (fixed2);  
}

float Fixed::toFloat(void) const
{
    return (((float)this->fp / (float)(1 << Fixed::bits)));
}

int Fixed::toInt(void) const
{
    return ((this->fp) >> Fixed::bits);
}

std::ostream& operator<<(std::ostream &os, const Fixed& data)
{
    os << data.toFloat();
    return (os);
}
int Fixed::getRawBits() const
{
    return this->fp;
}

void Fixed::setRawBits(int const raw )
{
    this->fp = raw;
}


Fixed::~Fixed()
{
}