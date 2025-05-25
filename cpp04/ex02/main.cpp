#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{

    {
        Cat cat;
        Dog dog;
        cat.makeSound();
        dog.makeSound();
        std::cout << cat.getType() << std::endl;
        std::cout << dog.getType() << std::endl;
    }
    Cat basic;
    {
        Cat tmp = basic;
    }
    return 0;
}