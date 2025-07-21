#include "Array.hpp"

int main()
{
    try
    {
        Array<int> b;
        Array<int> a(3);
        b[3] = 3;
        std::cout << a.size();
    }
    catch (std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

