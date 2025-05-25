#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& other); 
        Dog& operator=(const Dog& other);
        virtual const std::string& getType( void ) const;
        virtual void makeSound() ;
        ~Dog();
};

#endif