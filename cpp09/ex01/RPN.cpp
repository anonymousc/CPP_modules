#include "RPN.hpp"


calculate::calculate()
{

}

calculate::calculate(const calculate& other)
{
    *this = other;
}

calculate &calculate::operator=(const calculate& op)
{
    if(this != &op)
        this->formula = op.formula;
    return (*this);
}
bool syntax(const char &ref)
{
    return (ref == '+' || ref == '-' || ref == '/' || ref == '*');
}
int calculate::insert_to_calculate(const std::string &args)
{
    for (int i = 0; args[i]; i++)
    {
        if (args[i] == ' ')
            continue;
            
        if (isdigit(args[i]))
        {
            formula.push(args[i] - '0');
        }
        else if (syntax(args[i]))
        {
            if (formula.size() < 2)
            {
                std::cout << "Error: Invalid RPN expression" << std::endl;
                return 0;
            }
            
            int b = formula.top(); formula.pop();
            int a = formula.top(); formula.pop();
            int result;
            
            switch (args[i])
            {
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '/':
                    if (b == 0)
                    {
                        std::cout << "Error: Division by zero" << std::endl;
                        return 0;
                    }
                    result = a / b;
                    break;
            }
            formula.push(result);
        }
    }  
    if (formula.size() != 1)
    {
        std::cout << "Error: Invalid RPN expression" << std::endl;
        return 0;
    }
    
    return formula.top();
}
calculate::~calculate()
{

}