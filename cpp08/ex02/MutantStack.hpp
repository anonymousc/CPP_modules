#include <iostream>
#include <stack>
template <typename T> class MutantStack : public std::stack<T>
{
    private:
        T* _memory;
    public:
    // template <typename ITER>
    class iterator
    {
        private:
            T* ptr;
        public:
            iterator(T*_ptr) : ptr(_ptr)
            {}
            iterator& operator=(const iterator &other)
            {
                this->ptr = other.ptr;
                return (*this);
            }
            T& operator*()
            {
                return (*ptr);
            }
            T& operator[](int index)
            {
                return (ptr[index]);
            }
            T *operator->()
            {
                return (ptr);
            }
             iterator& operator++()
            {
                ptr++;
                return *this;
            }
            
            iterator& operator--()
            {
                ptr--;
                return *this;
            }
            
            iterator operator++(int)
            {
                iterator tmp = *this;
                ++ptr;
                return tmp;
            }
            iterator operator--(int)
            {
                iterator tmp = *this;
                --ptr;
                return tmp;
            }
            bool operator==(const iterator& op)
            {
                return (this->ptr == op.ptr);
            }
            bool operator!=(const iterator& op)
            {
                return (this->ptr != op.ptr);
            }
    };
    iterator begin()
    {
        return (&this->c[0]);
    }
    iterator end()
    {
        return (&this->c[0] + this->c.size());
    }
        

};
template <typename T> std::ostream& operator<<(std::ostream& out, typename MutantStack<T>::iterator& it)
{
    out << *it;
    return (out);
}