#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
}

Cat::Cat(const Cat& original)
{
    this->type = original.type;
}

Cat &Cat::operator=(const Cat& original)
{
    if(this != &original)
        this->type = original.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

const std::string &Cat::getType( void ) const
{
    return (type);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}