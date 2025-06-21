#pragma once
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool  iSsigned;
        const int gradeforsign;
        const int gradetoexec;
        Form();
    public:    
        Form(std::string Name, const int, const int );
        Form& operator=(const Form& original);
        Form(const Form& original);
        void beSigned(Bureaucrat &b);
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
        const std::string &getName() const;
        bool getISsigned() const;
        int getGradeforsign() const;
        int getGradetoexec() const;

        ~Form();
};
std::ostream& operator<<(std::ostream& os ,Form &b);
