#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool  iSsigned;
        const int gradeforsign;
        const int gradetoexec;
        AForm();
    public:    
        AForm(std::string Name, const int, const int );
        AForm& operator=(const AForm& original);
        AForm(const AForm& original);
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
        virtual void abstracted() const = 0;
        void execute(Bureaucrat const & executor) const;
        bool getISsigned() const;
        int getGradeforsign() const;
        int getGradetoexec() const;
        virtual ~AForm();
};
std::ostream& operator<<(std::ostream& os ,AForm &b);
