#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string name;
        ShrubberyCreationForm();
        void abstracted() const;
    public:
        ShrubberyCreationForm(std::string Name);
        ShrubberyCreationForm(const ShrubberyCreationForm& original);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& original);
        ~ShrubberyCreationForm();
};
