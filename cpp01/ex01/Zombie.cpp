#include "Zombie.hpp"
Zombie::Zombie(){}
void Zombie::setter(std::string name)
{
	this->name = name;
}
void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	
}