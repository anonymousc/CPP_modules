#include "Harl.hpp"

int main()
{
   Harl obj;
   obj.complain("DEBUG");
   obj.complain("INFO");
   obj.complain("WARNING");
   obj.complain("ERROR");
   obj.complain("INVALID");
   return 0;
}