#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> a;
        for (int i = 0; i < 41; i++)
            a.push_back(i);
        std::cout << easyfind(a, 4);
    }
    catch(...)
    {
        std::cerr << "exception caught\n";
    }
}