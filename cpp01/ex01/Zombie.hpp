#ifndef Zombie_HPP
#define Zombie_HPP
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
	void setter(std::string name);
	void announce( void );
	Zombie();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name);

#endif