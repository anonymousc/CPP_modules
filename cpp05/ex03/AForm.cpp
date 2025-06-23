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

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("grade is too High to sign !!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("grade is too Low to sign !!");
}
std::ostream& operator<<(std::ostream& os ,AForm &b)
{
    os << b.getName() << " , bureaucrat grade " << b.getGradeforsign() << " , bureaucrat grade to execute " << b.getGradetoexec();
    if (b.getISsigned())
        os << " , is signed";
    else
        os << " , is not signed";
    return (os);
}
const std::string &AForm::getName() const
{
    return (this->name);

}
void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->gradeforsign)
        throw AForm::GradeTooLowException();
    else
        this->iSsigned = true;
}
void AForm::execute(Bureaucrat const & executor) const
{
    if (!this->getISsigned() || executor.getGrade() > this->gradetoexec)
        throw AForm::GradeTooLowException();
    else
        abstracted();
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