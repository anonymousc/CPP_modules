#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("fire");
		HumanB jim("test");
		jim.setWeapon(club);
		jim.attack();
		club.setType("test");
		jim.attack();
	}
	return 0;
}