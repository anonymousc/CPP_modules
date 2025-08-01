#pragma once
#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <string>
#include <cstring>
#include <regex.h>
#define Date "^([0-9]{4})-([0-9]{2})-([0-9]{2})$"
#define INT_ "^[-+]?[0-9]+[.]?+[0-9]?$"

class BTC
{
    private:
        std::map<std::string, double> btc_check;
    public:
        BTC();
        void find_data(int& ac ,char **av);
        std::string &parse_everything_to_fill(std::string &line);
        ~BTC();
};

