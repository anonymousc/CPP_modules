#pragma once
#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(int a , std::string b);
        Bureaucrat(const Bureaucrat& original);
        Bureaucrat& operator=(const Bureaucrat& original);
        void incrementGrade();
        void decrementGrade();
        void signForm(bool);
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
        const std::string& getName();
        const int& getGrade();
        ~Bureaucrat();
};
std::ostream& operator<<(std::ostream& os ,Bureaucrat &b);