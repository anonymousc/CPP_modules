#include "Dog.hpp"


Dog::Dog() : Animal()
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& original) : Animal(original)
{
    this->type = original.type;
}

 void Dog::makeSound() const
{
    std::cout << "Bark!!" << std::endl;
}

Dog &Dog::operator=(const Dog& original)
{
    // delete brain;
    this->brain = new Brain(*original.brain);
    if(this != &original)
    {
        this->type = original.type;
        this->brain = original.brain;
    }
    return (*this);
}

const std::string &Dog::getType( void ) const  
{
    return (type);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}