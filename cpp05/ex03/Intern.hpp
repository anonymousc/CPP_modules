#pragma once
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
        Intern Intern::operator=(const Intern& original);
        void makeForm(std::string form, std::string name); 
        ~Intern();
};


