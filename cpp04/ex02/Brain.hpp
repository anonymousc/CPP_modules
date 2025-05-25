#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain 
{
    public:
        Brain();
        std::string ideas[100];
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain();
};
#endif