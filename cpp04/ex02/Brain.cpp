#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "constructor called from brain" << std::endl;
}
Brain::Brain(const Brain& other)
{
    std::cout << "copy constructor called from brain" << std::endl;
    *this = other;
}
Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}
Brain::~Brain()
{
    std::cout << "destructor called from brain" << std::endl;
}