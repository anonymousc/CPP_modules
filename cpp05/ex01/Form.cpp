#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string Name , const int gradeforSign, const int Gradetoexec) : name(Name), gradeforsign(gradeforSign), gradetoexec(Gradetoexec) 
{
    if(this->gradeforsign < 1 || this->gradetoexec < 1)
        throw Form::GradeTooHighException();
    if(this->gradeforsign > 150 || this->gradetoexec > 150)
        throw Form::GradeTooLowException();
    this->iSsigned = false;
}

Form::Form(const Form& original) : name(original.name), gradeforsign(original.gradeforsign), gradetoexec(original.gradetoexec)
{
    *this = original;
}

Form& Form::operator=(const Form& original)
{
    if(this != &original)
    {
        this->iSsigned = original.iSsigned;
    }
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("grade is too High to sign !!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("grade is too Low to sign !!");
}

void Form::beSigned(Bureaucrat &b) const
{
    if (b.getGrade() <= this->gradeforsign)
    {
        std::cout << b.getName() << " signed " << this->name << std::endl;
    }
    else
    {
        std::cout << b.getName() << " couldn't sign " << this->name << " because grade too low!" << std::endl;
    }
}

const std::string &Form::getName() const
{
    return (this->name);

}

bool Form::getISsigned() const
{
    return (this->iSsigned);
}

int Form::getGradeforsign() const
{
    return (this->gradeforsign);
}

int Form::getGradetoexec() const
{
    return (this->gradetoexec);
}

Form::~Form()
{
}