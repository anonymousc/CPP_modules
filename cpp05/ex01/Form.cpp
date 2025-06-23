#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string Name , const int gradeforSign, const int Gradetoexec) : name(Name), iSsigned(false) , gradeforsign(gradeforSign), gradetoexec(Gradetoexec) 
{
    if(this->gradeforsign < 1 || this->gradetoexec < 1)
        throw Form::GradeTooHighException();
    if(this->gradeforsign > 150 || this->gradetoexec > 150)
        throw Form::GradeTooLowException();
    this->iSsigned = false;
}

Form::Form(const Form& original) : name(original.name),iSsigned(original.iSsigned), gradeforsign(original.gradeforsign), gradetoexec(original.gradetoexec)
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
std::ostream& operator<<(std::ostream& os ,Form &b)
{
    os << b.getName() << " , bureaucrat grade " << b.getGradeforsign() << " , bureaucrat grade to execute " << b.getGradetoexec();
    if (b.getISsigned())
        os << " , is signed";
    else
        os << " , is not signed";
    return (os);
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->gradeforsign)
        throw Form::GradeTooLowException();
    iSsigned = true;
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