#pragma once
#include <stack>
#include <iostream>
#include <cstdlib>

class calculate
{
    private:
        std::stack<int> formula;
    public:
        calculate();
        calculate(const calculate&);
        calculate& operator=(const calculate&);
        int insert_to_calculate(const std::string &args);
        ~calculate();
};