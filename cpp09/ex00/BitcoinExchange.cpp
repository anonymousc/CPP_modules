#include "BitcoinExchange.hpp"


BTC::BTC()
{
}
std::string& rtrim(std::string& s)
{
    s.erase(s.find_last_not_of("\t ") + 1);
    return s;
}

std::string& ltrim(std::string& s)
{
    s.erase(0, s.find_first_not_of("\t "));
    return s;
}

std::string& trim(std::string s)
{
    return ltrim(rtrim(s));
}
bool check_format(std::string &ref, const bool& type)
{
    regex_t reg;
    if(type == 0 && !regcomp(&reg, Date, REG_EXTENDED))
    {
        if(!regexec(&reg, ref.c_str(), 0 , NULL, 0)) 
            return (true);
    }
    if(type == 1 && !regcomp(&reg, INT_, REG_EXTENDED))
    {
        if(!regexec(&reg, ref.c_str(), 0 , NULL, 0)) 
            return (true);
    }
    return false;
}
std::string &BTC::parse_everything_to_fill(std::string &line)
{
    std::string convert = (trim(line.substr(line.find('|') + 1 , line.length())));
    if(static_cast<int>(std::count(line.begin(), line.end(), '|')) != 1 || check_format(convert, 1) == false || check_format(trim(line.substr(0 , line.find('|'))), 0) == false)
        std::cout << "Error: bad input => " + line << std::endl;
    else if(atof(convert.c_str()) <= -1)
        std::cout << "Error: not a positive number." << std::endl;
    else if(atof(convert.c_str()) > 1000)
            std::cout << "Error: too large a number." << std::endl;
    else
    {
        double value = atof(convert.c_str());
        std::string date = trim(line.substr(0 , line.find('|')));  
        std::map<std::string, double>::iterator it = btc_check.find(date);
        if(it != btc_check.end())
        {
            double total = value * it->second;
            std::cout << date + " => " << value << " = " << total << std::endl;
        }
        else
        {
            std::map<std::string, double>::iterator closest = btc_check.end();
            for(std::map<std::string, double>::iterator iter = btc_check.begin(); iter != btc_check.end(); ++iter)
            {
                if(iter->first < date)
                    closest = iter;
                else
                    break;
            }
            if(closest != btc_check.end())
            {
                double total = value * closest->second;
                std::cout << date + " => " << value << " = " << total << std::endl;
            }
        }
    }
    return (line);
}
void BTC::find_data(int& ac, char **av)
{
    if(ac != 2)
        return (std::cout << "doesnt exist or cant be opened" << std::endl, (void)0);
    std::ifstream data;
    std::string line;

    data.open("./data.csv");
    if(!data.is_open())
        return (std::cout << "doesnt exist or cant be opened" << std::endl, (void)0);
    for (; getline(data, line);)
    {
        if(line != "date,exchange_rate")
            btc_check[line.substr(0,line.find(','))] = atof(line.substr(line.find(',') + 1, line.length() - 1).c_str());
    }
    data.close();
    data.open(av[1]);
    getline(data, line);
    if(trim(line.substr(0 , line.find('|'))) == "date" && trim(line.substr(line.find('|') + 1 , line.length())) == "value")
    {
        for (;getline(data, line) ;)
            parse_everything_to_fill(line);
    }
    data.close();
    return ;
}
BTC::~BTC()
{
}