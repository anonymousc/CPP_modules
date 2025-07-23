#include <iostream>
#include <algorithm>
#include <vector>


template <typename T> int easyfind(T &data, int a)
{
    for (size_t i = 0; i < data.size() ; i++)
    {
        if(data[i] == a)
            return (a);
    }
    return (throw std::exception(), 0);
}