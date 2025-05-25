#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& other); 
        Dog& operator=(const Dog& other);
        virtual const std::string& getType( void ) const;
        virtual void makeSound() const;
        ~Dog();
};