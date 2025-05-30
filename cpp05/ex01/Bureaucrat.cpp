#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default constructor"), grade(150)
{
}
Bureaucrat::Bureaucrat(const Bureaucrat& original)
{
    *this = original;
}

Bureaucrat::Bureaucrat(int _grade, std::string _name) : name(_name), grade(_grade)
{
    if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if(this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& original)
{ 
    if(this != &original)
    {
        (std::string)this->name = original.name;
        this->grade = original.grade;
    }
    return (*this);
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low";
}
const int& Bureaucrat::getGrade(void)
{
    return (this->grade);
}
const std::string &Bureaucrat::getName()
{
    return (this->name);
}
std::ostream& operator<<(std::ostream& os ,Bureaucrat& b)
{
    os << b.getName() << " , bureaucrat grade " << b.getGrade();
    return (os);
}
void Bureaucrat::incrementGrade()
{
        this->grade -= 1;
        if(this->grade < 1)
            throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{
        this->grade += 1;
        if(this->grade > 150)
        {
            throw Bureaucrat::GradeTooLowException();
        }
}
Bureaucrat::~Bureaucrat()
{
}
