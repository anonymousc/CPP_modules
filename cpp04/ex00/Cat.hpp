#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& other) ;
        Cat& operator=(const Cat& other) ;
        virtual const std::string& getType( void ) const;
        virtual void makeSound() const;
        ~Cat() ;

};