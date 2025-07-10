#include "ScalarConvert.hpp"


double parse(const std::string &ref, bool &isnan , bool &isinf)
{
    regex_t re;
    bool data;
    if(!regcomp(&re , F, REG_EXTENDED))
    {
        data = regexec(&re, ref.c_str(), 0, NULL, 0);
        if(data == 0)
            return (atof(ref.c_str()));
    }
    if(!regcomp(&re , INT, REG_EXTENDED))
    {
        data = regexec(&re, ref.c_str(), 0, NULL, 0);
        if(data == 0)
            return (atoll(ref.c_str()));
    }
    if(!regcomp(&re, INF, REG_EXTENDED))
    {
        data = regexec(&re, ref.c_str(), 0, NULL, 0);
        if(data == 0)
            return (isinf = true, 0.0);
    }
    if(!regcomp(&re , Nan, REG_EXTENDED))
    {
        data = regexec(&re, ref.c_str(), 0, NULL, 0);
        if(data == 0)
            return (isnan = true, 0.0f);
    }
    if(!regcomp(&re , CHAR, REG_EXTENDED))
    {
        data = regexec(&re, ref.c_str(), 0, NULL, 0);
        if(data == 0)
            return ((*ref.c_str()));
    }
    return (throw ScalarConvert::FailedToRun(), 0.0f);
}
const char *ScalarConvert::FailedToRun::what() const throw()
{
    return ("Invalid convertion or args");
}
void ScalarConvert::convert(std::string name)
{
    if(atoll(name.c_str()) > __INT_MAX__ || atoll(name.c_str()) < INT_MIN || name.empty())
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : impossible" << std::endl;
        std::cout << "double : impossible" << std::endl;
        return ;
    }
    bool isnan, isinf;
    double convertion = parse(name, isnan , isinf);
    if(isinf == true)
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : " + name << std::endl;
        std::cout << "float : " + name << std::endl;
        std::cout << "double : " + name << std::endl;
        return ;
    }   
    if(isnan == true)
    {
        std::cout << "char : impossible"  << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
        return ;
    }
    if(convertion > CHAR_MAX || convertion < CHAR_MIN)
        std::cout << "char : impossible" << std::endl;
    else if(isprint(convertion))
        std::cout << "char : '" << static_cast<char>(convertion) << "'" << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
    std::cout << "int : " << static_cast<int>(convertion) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(convertion) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(convertion) << std::endl;
}