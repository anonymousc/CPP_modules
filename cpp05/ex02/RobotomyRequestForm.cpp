#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string Name) : AForm("RobotomyRequest" , 72 , 45),  name(Name)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original) : AForm("RobotomyRequest" , 72 , 45)
{
    *this = original;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& orig)
{
    if(this != &orig)
    {
        this->name = orig.name;
    }
    return (*this);
}

void RobotomyRequestForm::abstracted() const
{
    static int i;
    switch (i)
    {
        case 0:
            std::cout << "some drilling noises, " + this->name + " has been robotomized successfully." << std::endl;
            i = 1;
            break;
        case 1:
            std::cout << "robotmy failed" << std::endl;
            i = 0;
            break;
        default:
            break;
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
