#include <iostream>

std::string ft_toupper(std::string str)
{
	for (size_t i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);	
}

int main(int ac, char **av)
{
	std::string str;
	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (size_t i = 1; av[i]; i++)
	{
		str = av[i];
		std::cout << ft_toupper(str);
	}
	std::cout << '\n';
}
