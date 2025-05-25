#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &origin)
{
    this->type = origin.type;
}
Animal &Animal::operator=(const Animal& new1)
{
    if(this != &new1)
        this->type = new1.type;
    return *this;
}
void Animal::makeSound() const
{
    std::cout << "calling making sound from class animal" << std::endl;
}
const std::string& Animal::getType( void ) const
{
    return (this->type);
}
Animal::~Animal()
{
    
}