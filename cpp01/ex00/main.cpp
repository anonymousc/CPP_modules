#include "Zombie.hpp"

int main ()
{
	Zombie *data = newZombie("larry");
	delete data;
	randomChump("arnold");
}