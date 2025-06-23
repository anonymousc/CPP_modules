#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Name) : AForm("Shrubbery", 145 , 137) , name(Name)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original) : AForm("Shrubbery", 145 , 137) 
{
    *this = original;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original)
{
    if(this != &original)
        this->name = original.name;
    return (*this);
}

void ShrubberyCreationForm::abstracted() const
{
    std::string filename = this->name;
    std::ofstream data(filename.append("_shrubbery").c_str());
    data << "1\n"
            "   &&&\n"
            "  &&&&&\n"
            " &&&&&&&\n"
            "   |||\n"
            "\n"
            "   @@@\n"
            "  @@@@@\n"
            " @@@@@@@\n"
            "   |||\n"
            "\n"
            "   $$$\n"
            "  $$$$$\n"
            " $$$$$$$\n"
            "   |||\n"
            "\n"
            "   ###\n"
            "  #####\n"
            " #######\n"
            "   |||";
    data.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
