#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <cstdlib>

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hp;
        unsigned int ep;
        unsigned int damage;
    public:
        ClapTrap();
        unsigned int getDamage( void ) const;
        const std::string getName() const;
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        virtual ~ClapTrap();
};


#endif

