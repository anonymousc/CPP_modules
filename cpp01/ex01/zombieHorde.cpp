#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *data = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		data[i].setter(name);
	}
	return (data);
}