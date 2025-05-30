#include "Form.hpp"
Form::Form() : gradeforsign(false) , gradetoexec(false)
{
}
Form::Form(std::string Name, bool Issign, const bool gradeforSign, const bool Gradetoexec) : name(Name) , iSsigned(Issign), gradeforsign(gradeforSign), gradetoexec(Gradetoexec) 
{
}
Form::Form(const Form& original)
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
void beSigned(Bureacrat *b)
{

}
Form::~Form()
{
}