#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern
{
    private:
    public:
        Intern();
        Intern(const Intern& original);
        Intern &operator=(const Intern& original);
        AForm  *makeForm(std::string form, std::string name);
        class NoFormFound : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        ~Intern();
};


