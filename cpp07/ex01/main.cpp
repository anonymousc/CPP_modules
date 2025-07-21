#include "Iter.hpp"


template <typename T> void print(T &n) 
{
    std::cout << n << " ";
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::string strArr[] = {"Hello", "World"};
    size_t length = sizeof(arr) / sizeof(arr[0]);
    iter(arr, length, print);
    std::cout << std::endl;
    iter(strArr, 2, print);
    std::cout << std::endl;
    return 0;
}