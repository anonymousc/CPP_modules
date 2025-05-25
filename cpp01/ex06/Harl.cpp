#include "Harl.hpp"


Harl::Harl(){
}
void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n I really do!" << std::endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money.\n You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free.\n I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
	void (Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	switch (level[0])
	{
		case "DEBUG"[0]:
		{
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*f[0])();
			std::cout << std::endl;
			
		}
		case "INFO"[0]:
		{
			std::cout << "[ INFO ]" << std::endl;
			(this->*f[1])();
			std::cout << std::endl;			
		}
		case "WARNING"[0]:
		{
			std::cout << "[ WARNING ]" << std::endl;
			(this->*f[2])();
			std::cout << std::endl;
			
		}
		case "ERROR"[0]:
		{
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f[3])();
			std::cout << std::endl;
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	
}
Harl::~Harl(){
}