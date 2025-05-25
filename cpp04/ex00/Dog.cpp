#include "Dog.hpp"


Dog::Dog() : Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";

}

Dog::Dog(const Dog& original)
{
    this->type = original.type;
}

 void Dog::makeSound() const
{
    std::cout << "Bark!!" << std::endl;
}

Dog &Dog::operator=(const Dog& original)
{
    if(this != &original)
        this->type = original.type;
    return (*this);
}

const std::string &Dog::getType( void ) const  
{
    return (type);
}

Dog::~Dog()
{
}