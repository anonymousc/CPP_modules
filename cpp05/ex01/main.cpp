#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

int main()
{
    try
    {
        Bureaucrat c(29, "adam");
        Form a("assignement form", 30, 2);
        a.beSigned(c);
        c.signForm(a);
        c.incrementGrade();
        c.decrementGrade();
        c.incrementGrade();
        std::cout << a << std::endl;
    }
    catch(Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
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