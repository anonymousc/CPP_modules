#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string name;
        PresidentialPardonForm();
        void abstracted() const;
    public:
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm& original);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& original);
        ~PresidentialPardonForm();
};


