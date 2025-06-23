#include "Intern.hpp"
#include <cstring>

Intern::Intern()
{
}
Intern::Intern(const Intern& original)
{
    *this = original;
}
Intern &Intern::operator=(const Intern& original)
{
    (void)original;
    return (*this);
}

AForm *Intern::makeForm(std::string form, std::string name)
{
    std::string form1[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    switch(form[0])
    {
        case 'r':
            
            return ((strcmp(form.c_str(), form1[0].c_str()) == 0) ? std::cout << "Intern creates " << form1[0] << std::endl,  new RobotomyRequestForm(name) : throw Intern::NoFormFound());
            break;
        case 'p':
            return ((strcmp(form.c_str(), form1[1].c_str()) == 0) ? std::cout << "Intern creates " << form1[1] << std::endl, new PresidentialPardonForm(name) : throw Intern::NoFormFound());
            break;
        case 's':
            return ((strcmp(form.c_str(), form1[2].c_str()) == 0) ? std::cout << "Intern creates " << form1[1] << std::endl, new ShrubberyCreationForm(name) : throw Intern::NoFormFound());
            break;
        default:
            throw Intern::NoFormFound(); 
            break;
    }
    return (NULL);
}
const char *Intern::NoFormFound::what() const throw()
{
    return ("No form is found on the list");
}

Intern::~Intern()
{
}