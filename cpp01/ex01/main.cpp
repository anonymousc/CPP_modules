#include "Zombie.hpp"

int main ()
{
	Zombie *data = zombieHorde(5 ,"test");
	for (int i = 0; i < 5; i++)
	{
		data[i].announce();
	}
	delete [] data;
}