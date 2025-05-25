#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &origin)
{
    this->type = origin.type;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal& new1)
{
    if(this != &new1)
        this->type = new1.type;
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << "calling making sound from class WrongAnimal" << std::endl;
}
const std::string& WrongAnimal::getType( void ) const
{
    return (this->type);
}
WrongAnimal::~WrongAnimal()
{
    
}