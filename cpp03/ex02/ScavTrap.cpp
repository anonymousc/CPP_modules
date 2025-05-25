#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)  
{
    std::cout << "ScavTrap constructor called parameterized" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if(this != &copy)
    {
        this->name = copy.name;
        this->damage = copy.damage;
        this->hp = copy.hp;
        this->ep = copy.ep;
    }
    std::cout << "ScavTrap Copy assignement called" << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(!this->hp)
       return std::cout << this->name <<" Is Already Dead!" << std::endl, (void)0;
    
    if(!this->ep)
    {
        std::cout << "Not enough hit points or energy points!" << std::endl;
        return ;
    }
    this->ep--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->getDamage() <<  " points of damage!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}