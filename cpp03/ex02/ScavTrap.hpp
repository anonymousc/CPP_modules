#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap& copy);
        void attack(const std::string& target);
        ScavTrap &operator=(const ScavTrap& copy);
        void guardGate();
        ~ScavTrap();
};


#endif