#include "Intern.hpp"
#include <cstring>
Intern::Intern()
{
}
int _strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (1);
        i++;
    }
    return (0);
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
bool get_which_form(std::string form)
{
    return ((_strncmp(form.c_str() , "Robotomy" , 9) || _strncmp(form.c_str() , "robotomy" , 9)) || _strncmp(form.c_str(), "PresidentialPardion" , 20) || _strncmp(form.c_str(), "ShrubberyCreation" , 21));    
}

AForm *Intern::makeForm(std::string form, std::string name)
{
    std::string form1[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    switch(form[0])
    {
        case 'r':
            
            return ((strcmp(form.c_str(), form1[0].c_str()) == 0) ? std::cout << "Intern creates " << form1[0] << std::endl, new RobotomyRequestForm(name) : throw Intern::NoFormFound());
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
    return (new ShrubberyCreationForm(name));
}
const char *Intern::NoFormFound::what() const throw()
{
    return ("No form is found on the list");
}

Intern::~Intern()
{
}