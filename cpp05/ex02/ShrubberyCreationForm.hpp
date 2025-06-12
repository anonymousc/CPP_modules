#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string name;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string Name);
        ShrubberyCreationForm(const ShrubberyCreationForm& original);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& original);
        void abstracted() const;
        ~ShrubberyCreationForm();
};
