#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Fragtrap Default constructor called" << std::endl;
    this->hp = 100;
    this->ep = 100;
    this->damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->ep = 100;
    this->damage = 30;
    std::cout << "Fragtrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap& copy)
{
    if(this != &copy)
    {
        this->name = copy.name;
        this->hp = copy.hp;
        this->ep = copy.ep;
        this->damage = copy.damage;
    }
    std::cout << "Fragtrap Copy assignement called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "a positive high fives request" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap Destructor called" << std::endl;
}