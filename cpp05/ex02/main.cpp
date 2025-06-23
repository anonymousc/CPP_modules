#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {

        Bureaucrat d(1 , "berry");
        PresidentialPardonForm a("test");
        RobotomyRequestForm b("adam");
        ShrubberyCreationForm c("adam1");
        a.beSigned(d);
        b.beSigned(d);
        a.execute(d);
        b.execute(d);
        c.execute(d);
    }   
    catch(AForm::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(AForm::GradeTooLowException& e)
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
        std::cerr << "default catch" << '\n';
    }
}