#include "ScavTrap.hpp"

int main()
{
    ScavTrap A("Robot");
    ScavTrap B("Crap");
    for (int i = 0; i < 4; i++)
    {
        A.attack(B.getName());
        B.takeDamage(A.getDamage());
    }
    A.getDamage();
    A.guardGate();
    A.attack(B.getName());
}