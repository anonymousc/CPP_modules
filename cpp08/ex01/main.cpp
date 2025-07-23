#include "Span.hpp"

int main()
{
   try
   {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        Span sp1 = Span(5);
        sp1.addNumberEnhanced(1 , 4);
        std::cout << "enhanced " << sp1.shortestSpan() << std::endl;
        std::cout << "enhanced " << sp1.longestSpan() << std::endl;

    }
    catch(Span::Custom &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}