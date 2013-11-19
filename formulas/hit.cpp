#include <iostream>
#include <stdlib.h>
#include <ctime>

double hitfunc(int speed1, int speed2) 
{
   //Performs calculation to get hit percent
   srand(time(0));
   double hit, chance, base, max = 0.0;
   base = 0.4; //starting point for hit
   max = 0.5; //maximum point for hit
   chance = (float)rand()/RAND_MAX;
   hit = ((2*speed1-speed2)/speed1)*(base+max*chance);
   return hit;
}
