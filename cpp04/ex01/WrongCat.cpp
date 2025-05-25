#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
}

WrongCat::WrongCat(const WrongCat& original) : WrongAnimal(original)
{
    this->type = original.type;
}

WrongCat &WrongCat::operator=(const WrongCat& original)
{
    if(this != &original)
        this->type = original.type;
    return (*this);
}
void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow!!" << std::endl;
}

const std::string &WrongCat::getType( void ) const
{
    return (type);
}

WrongCat::~WrongCat()
{
}