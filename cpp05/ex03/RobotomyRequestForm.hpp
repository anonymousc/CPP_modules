#pragma once
#include <iostream>
#include "AForm.hpp"
#include <exception>


class RobotomyRequestForm : public AForm
{
    private:
        std::string name;
        void abstracted() const;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string Name);
        RobotomyRequestForm(const RobotomyRequestForm& original);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& original);
        ~RobotomyRequestForm();
};

