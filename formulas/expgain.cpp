#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>

int expgfunc(int level1) //Takes in the first combatents level
{
   //Performs calculation to get experience gain
   srand(time(0));
   int base, max, expg = 0;
   double chance = 0.0;
   base = 95; //starting point for experience gain
   max = 10; //maximum point for experience gain
   chance = (float)rand()/RAND_MAX;
   expg = round(level1*(base+max*chance));
   return expg;
}