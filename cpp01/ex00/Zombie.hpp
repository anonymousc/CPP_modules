#ifndef Zombie_HPP
#define Zombie_HPP
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
	void announce( void );
		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);

#endif