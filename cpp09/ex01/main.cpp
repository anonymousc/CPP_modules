#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
        return (std::cout << "Usage " << av[0] << " 'formula'!", 0);
    calculate a;
    std::cout << a.insert_to_calculate(av[1]) << std::endl;
}