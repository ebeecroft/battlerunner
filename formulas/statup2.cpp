#include <stdlib.h>
#include <ctime>
#include <math.h>

int statupfunc2(int stat1)
{
   //Performs calculation to get stat up
   srand(time(0));
   double base, max, chance = 0.0;
   int statup = 0;
   base = 1.02; //starting point for stat up
   max = 0.03; //maximum point for stat up
   chance = (float)rand()/RAND_MAX;
   statup = round(stat1*((base+max*chance)-1));
   if (statup == 0)
      statup = 1;

   return statup;
}
