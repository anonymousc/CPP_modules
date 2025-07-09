#include "ScalarConvert.hpp"
#include <cfloat>
#include <cmath>

int main(int ac , char **av)
{
   try
   {
        if(ac != 2)
            throw ScalarConvert::FailedToRun();
       ScalarConvert::convert(av[1]);
   }
   catch(ScalarConvert::FailedToRun &e)
   {
    std::cerr << e.what() << '\n';
   }
   return (0);
   
}