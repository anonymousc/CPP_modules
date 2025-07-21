#pragma once
#include <iostream>
#include <exception>
template <typename T> class  Array
{
    private:
        T *arr;
        unsigned int _size;
    public:
        Array() : _size(0)
        {
            arr = new T[_size];
        }
        Array(unsigned int size) : _size(size)
        {
            arr = new T[_size];
        }
        Array(const Array & data)
        {
            *this = data;
        }
        T &operator[](size_t index)
        {
            if(index > _size)
                throw std::out_of_range("proccess terminated out of bound !!!!");
            return (arr[index]);
        }
        Array &operator=(const Array &ref)
        {
            if(this != &ref)
            {
                delete [] arr;
                _size = ref._size;
                arr = new T[_size];
                for ( int i = 0; i < _size; i++)
                    arr[i] = ref.arr[i];
                
            }
            return *this;
        }
        size_t size()
        {
            return (_size);
        }
        ~Array()
        {
            delete [] arr;
        }
};