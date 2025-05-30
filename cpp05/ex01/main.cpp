#include "Bureaucrat.hpp"
#include <cstdlib>

int main()
{
    try
    {
        Bureaucrat c(140 , "adam");
        c.decrementGrade();
        c.decrementGrade();
        c.decrementGrade();
        c.decrementGrade();
        c.decrementGrade();
        c.incrementGrade();
        c.incrementGrade();
        std::cout << c << std::endl;
        Bureaucrat a(0 , "test");
        Bureaucrat b(151 , "john");
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(...)
    {
        std::cerr << "default catch" << std::endl; 
    }
    
}