#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {

        PresidentialPardonForm a("test");
        RobotomyRequestForm b("adam");
        ShrubberyCreationForm c("adam1");
        a.abstracted();
        b.abstracted();
        c.abstracted();
        Bureaucrat d(10 , "berry");
        d.signForm(a);
        d.executeForm(a);
    }   
    catch(...)
    {
        std::exception e;
        std::cerr << e.what() << '\n';
    }
}