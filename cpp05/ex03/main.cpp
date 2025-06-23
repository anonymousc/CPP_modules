#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern intern;
        Bureaucrat bureaucrat1(1, "Bureaucrat1");
        AForm *form3 = intern.makeForm("robotomy request", "president");
        AForm *form1 = intern.makeForm("presidential pardon", "robot");
        AForm *form2 = intern.makeForm("shrubbery creation", "president");
        form1->beSigned(bureaucrat1);
        form2->beSigned(bureaucrat1);
        form3->beSigned(bureaucrat1);
        bureaucrat1.signForm(*form1);
        bureaucrat1.signForm(*form2);
        bureaucrat1.signForm(*form3);
        bureaucrat1.executeForm(*form1);
        bureaucrat1.executeForm(*form2);
        bureaucrat1.executeForm(*form3);
        AForm *form4 = intern.makeForm("Doesntexist", "president");
        form4->beSigned(bureaucrat1);
        bureaucrat1.signForm(*form4);
        bureaucrat1.executeForm(*form4);
    }   
    catch(AForm::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Intern::NoFormFound& e)
    {
        std::cerr << e.what() << '\n';
    }
}