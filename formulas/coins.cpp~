#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>

int coinsfunc(int level2)
{
   //Calculates the amount of money gained in battle
   srand(time(0));
   double chance, base, max = 0;
   int money;
   chance = (float)rand()/RAND_MAX;
   base = 0.4; //starting point for coins
   max = 0.8; //maximum point for coins
   money = round(level2*25*(base+max*chance));
   return money;
}
