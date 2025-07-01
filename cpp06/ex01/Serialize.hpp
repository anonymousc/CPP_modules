#include <iostream>
#include <stdint.h>

typedef struct s_Data
{
    int value;
} Data;

class Serialize
{
    private:
        Serialize();
        Serialize(const Serialize& other);
        Serialize& operator=(const Serialize& other); 
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};