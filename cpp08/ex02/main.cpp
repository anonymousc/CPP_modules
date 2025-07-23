#include "MutantStack.hpp"

int main()
{
    MutantStack<int> stack;
    stack.push(6);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    MutantStack<int>::iterator it = stack.begin();
    MutantStack<int>::iterator ite = stack.end();
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(stack);
}