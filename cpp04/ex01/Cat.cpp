#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat& original) : Animal(original)
{
    brain = new Brain(*original.brain);
    this->type = original.type;
}

Cat &Cat::operator=(const Cat& original)
{
    delete this->brain;
    this->brain = new Brain((const Brain&)(*original.brain));
    if(this != &original)
    {
        this->type = original.type;
        // this->brain = original.brain;
    }
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
    delete this->brain;
}
