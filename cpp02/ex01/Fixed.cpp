#include "Fixed.hpp"


Fixed::Fixed() : fp(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int data)
{
    fp = data << bits; 
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) 
{
	fp = (int)roundf(n * (1 << bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fp = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fp = other.getRawBits();
    return (*this);
}

float Fixed::toFloat(void) const
{
    return (((float)this->fp / (float)(1 >> Fixed::bits)));
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
    std::cout << "setRawBits member function called" << std::endl;
    this->fp = raw;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}