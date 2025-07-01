#include "Serialize.hpp"
#include <cstdio>

uintptr_t Serialize::serialize(Data* ptr) 
{
    printf("Serialize::serialize called with ptr: %p\n", reinterpret_cast<unsigned long *>(ptr));
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw) 
{
    return reinterpret_cast<Data*>(raw);
}

