#include "RobotomyRequestForm.hpp"
#include <cstdlib>

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
        std::srand(time(NULL));
        (rand() % 2 == 0) ? std::cout << "some drilling noises, " + this->name +\
         " has been robotomized successfully 50% of the time." << std::endl\
         : std::cout << "robotmy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
