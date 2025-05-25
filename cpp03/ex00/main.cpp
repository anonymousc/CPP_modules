#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("robot");
    clap.takeDamage(4);
    clap.attack("claptracks");
    clap.attack("claptracks");
    clap.attack("claptracks");
    clap.attack("claptracks");
    clap.beRepaired(400);
    clap.takeDamage(10);
    
}