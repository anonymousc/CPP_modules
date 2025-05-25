#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default") , hp(10), ep(10), damage(0) 
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::ClapTrap(std::string Name) : name(Name) , hp(10), ep(10), damage(0) 
{
    std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "ClapTrap Copy assignment constructor called" << std::endl;
    if(this != &copy)
    {
        this->name = copy.name;
        this->hp = copy.damage;
        this->ep = copy.ep;
        this->damage = copy.damage;    
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(!this->hp)
    {
        return std::cout << this->name <<" Is Already Dead!" << std::endl, (void)0;
    }
    if(!this->ep)
    {
        std::cout << "Not enough hit points or energy points!" << std::endl;
        return ;
    }
    this->ep--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->hp <<  " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!this->ep || !this->hp)
    {
        std::cout << "Not enough hit points or energy points!" << std::endl;
        return ;
    }
    this->hp += amount;
    this->ep--;
    std::cout << "ClapTrap " << this->name << " repaired " << amount << " points!" << std::endl;   
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(!this->hp)
    {
        return std::cout << this->name <<" Is Already Dead!" << std::endl, (void)0;
    }
    if(!this->ep)
    {
        std::cout << "Not enough hit points or energy points!" << std::endl;
        return ;
    }
    if(this->hp < amount)
    {
        this->hp = 0;
        std::cout << this->name << " is Dead 💀!!" << std::endl;
        return ;
    }
    this->hp -= amount;
    std::cout << this->name << " takes " << amount << " of damage!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}