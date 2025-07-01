#include "Base.hpp"
#include <typeinfo>
int main() 
{
    Base *instance = generate();
    if (instance) {
        std::cout << "Identifying instance using pointer:" << std::endl;
        identify(instance);
        std::cout << "Identifying instance using reference:" << std::endl;
        identify(*instance);
        delete instance; // Clean up the allocated memory
    } else {
        std::cout << "Failed to generate instance." << std::endl;
    }
}