#pragma once
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> integers;
    public:
        Span(unsigned int N);
        void addNumber(int);
        void addNumberEnhanced(int,int);
        class Custom : public std::exception
        {
            private:
                const char *_str;
            public:
                Custom(const char *str);
                const char *what() const throw();
        };  
        int shortestSpan() const;
        int longestSpan() const;

};