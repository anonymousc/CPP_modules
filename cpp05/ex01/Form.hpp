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
        Form(std::string Name, const int, const int );
        Form& operator=(const Form& original);
        Form(const Form& original);
        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        void beSigned(Bureaucrat &b) const;
        const std::string &getName() const;
        bool getISsigned() const;
        int getGradeforsign() const;
        int getGradetoexec() const;

        ~Form();
};
std::ostream& operator<<(std::ostream& os ,Form &b);
