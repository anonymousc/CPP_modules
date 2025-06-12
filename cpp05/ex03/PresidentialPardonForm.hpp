#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string name;
        PresidentialPardonForm();
        public:
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm& original);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& original);
        void abstracted() const;
        ~PresidentialPardonForm();
};


