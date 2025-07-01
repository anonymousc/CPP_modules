#include "Serialize.hpp"

int main() {
    Data data;
    data.value = 42;

    uintptr_t serializedData = Serialize::serialize(&data);
    std::cout << "Serialized Data: " << serializedData << std::endl;

    Data* deserializedData = Serialize::deserialize(serializedData);
    std::cout << "Deserialized Data Value: " << deserializedData->value << std::endl;

    return 0;
}