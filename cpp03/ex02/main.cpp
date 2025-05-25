#include "FragTrap.hpp"

int main()
{
    FragTrap A("robot");
    FragTrap B("scavtrap");
    for (int i = 0; i < 2; i++)
    {
        A.attack(B.getName());
        B.takeDamage(A.getDamage());
    }
    A.getDamage();
}