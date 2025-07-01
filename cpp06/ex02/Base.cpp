#include "Base.hpp"


Base *generate() {
    srand((time(0)));
    int random = rand() % 3;
    Base* instance = NULL;
    switch (random) {
        case 0:
            instance = new A();
            break;
        case 1:
            instance = new B();
            break;
        case 2:
            instance = new C();
            break;
    }

    return instance;
}

Base *identify(Base *p) 
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "A" << std::endl;
    } 
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
    } 
    else 
    {
        std::cout << "Unknown type" << std::endl;
    }
    return p;
}
Base *identify(Base &p) 
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
    else 
        std::cout << "Unknown type" << std::endl;
    return &p;
}

Base::~Base() 
{
}