#include <iostream>

template <typename T> void iter(T *p, size_t length, void (*f)(T &))
{
    for(size_t i = 0; i < length ; i++)
        (*f)(p[i]);   
}