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
        AForm *form3 = intern.makeForm("robotomy request", "president");
        AForm *form1 = intern.makeForm("presidential pardon", "robot");
        AForm *form2 = intern.makeForm("shrubbery creation", "president");
        form1->abstracted();
        form2->abstracted();
        form3->abstracted();
        AForm *form4 = intern.makeForm("Doesntexist", "president");
        form4->abstracted();
    }   
    catch(const Intern::NoFormFound& e)
    {
        std::cerr << e.what() << '\n';
    }
}