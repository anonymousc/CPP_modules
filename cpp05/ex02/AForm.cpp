#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string Name , const int gradeforSign, const int Gradetoexec) : name(Name), gradeforsign(gradeforSign), gradetoexec(Gradetoexec) 
{
    if(this->gradeforsign < 1 || this->gradetoexec < 1)
        throw AForm::GradeTooHighException();
    if(this->gradeforsign > 150 || this->gradetoexec > 150)
        throw AForm::GradeTooLowException();
    this->iSsigned = false;
}

AForm::AForm(const AForm& original) : name(original.name), gradeforsign(original.gradeforsign), gradetoexec(original.gradetoexec)
{
    *this = original;
}

AForm& AForm::operator=(const AForm& original)
{
    if(this != &original)
    {
        this->iSsigned = original.iSsigned;
    }
    return (*this);
}
void AForm::execute(Bureaucrat const & executor) const
{
    if (!this->getISsigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > this->gradetoexec)
        throw AForm::GradeTooLowException();
    this->abstracted();
}

void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->gradeforsign)
        throw AForm::GradeTooLowException();
    else
        this->iSsigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("grade is too High to sign !!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("grade is too Low to sign !!");
}

const std::string &AForm::getName() const
{
    return (this->name);

}

bool AForm::getISsigned() const
{
    return (this->iSsigned);
}

int AForm::getGradeforsign() const
{
    return (this->gradeforsign);
}

int AForm::getGradetoexec() const
{
    return (this->gradetoexec);
}

AForm::~AForm()
{
}