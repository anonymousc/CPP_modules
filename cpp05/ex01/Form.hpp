#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool iSsigned;
        const int gradeforsign;
        const int gradetoexec;
    public:    
        Form();
        Form(std::string Name, bool Issign, const bool gradeforSign, const bool Gradetoexec);
        Form& operator=(const Form& original);
        Form(const Form& original);
        class GradeTooHighException : public std::exception
        {
            public :
                GradeTooHighException();
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                virtual const char* what() const throw();
        };
        void beSigned(Bureacrat *b);
        const std::string &getName() const;
        const bool getISsigned() const;
        const bool getGradeforsign() const;
        const bool getGradetoexec() const;

        ~Form();
};