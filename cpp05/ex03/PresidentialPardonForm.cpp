#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("PresidentialPardon" , 25 , 5) , name(Target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original) : AForm("PresidentialPardon" , 25 , 5)
{
    *this = original;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& original)
{
    if(this != &original)
    {
        this->name = original.name;
    }
    return (*this);
}
void PresidentialPardonForm::abstracted() const
{
    std::cout << this->name + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}