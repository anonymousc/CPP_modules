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