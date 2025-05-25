#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat& original) : Animal(original)
{
    this->brain = new Brain(*original.brain);
    this->type = original.type;
}

Cat &Cat::operator=(const Cat& original)
{
    delete brain;
    this->brain = new Brain(*original.brain);
    if(this != &original)
    {
        this->type = original.type;
    }
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
}

const std::string &Cat::getType( void ) const
{
    return (type);
}

Cat::~Cat()
{
    delete this->brain;
}
