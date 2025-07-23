#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{}
Span::Custom::Custom(const char *str) : _str(str)
{}
void Span::addNumber(int data)
{
    if(this->integers.size() >= this->_N)
        throw Span::Custom("Out of range");
    integers.push_back(data);
}

int Span::longestSpan() const
{
    if(integers.empty() == true)
        throw Span::Custom("No elements has added");
   return ((*std::max_element(integers.begin(), integers.end())) - (*std::min_element(integers.begin(), integers.end())));
}
const char *Span::Custom::what() const throw()
{
    return ((this->_str));
}
int Span::shortestSpan() const
{
    if(integers.empty())
        throw Span::Custom("No elements has added");
    std::vector<int> ints = integers;
    std::sort(ints.begin(), ints.end());
    std::vector<int> res;
    for (int  i = 0; i < static_cast<int>(ints.size() - 1); i++)
       res.push_back(ints[i + 1] - ints[i]);
    return (*std::min_element(res.begin(), res.end()));
}
void Span::addNumberEnhanced(int start ,int end)
{
    int distance = abs(end - start) + 1;
    if((this->integers.size() + distance) >= this->_N)
        throw Span::Custom("Out of range");
    int i = start - 1;
    while (i <= end)
        addNumber(i++);
}