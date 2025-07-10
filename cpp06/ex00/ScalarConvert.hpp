#pragma once
#include <iostream>
#include <exception>
#include <cstring>
#include <cstdlib>
#include <regex.h>
#include <iomanip>
#include <limits.h>

#define F "^[-+]?[0-9]+[.]?[0-9]?+[f]?$"
#define Nan "^nan[f]?$"
#define INF "^[-+]inff$"
#define CHAR "^.$"

class ScalarConvert
{
    public:
        class FailedToRun : public std::exception
        {
            public:
                const char *what() const throw();
        };
        static void convert(std::string name);
};
