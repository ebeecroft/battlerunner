#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>

int damagefunc(int attack1, int defense2, int level1)
{
   //Performs calculation to get damage
   srand(time(0));
   int damage, atkconst = 0;
   double chance, base, max, defconst, levelconst = 0;
   chance = (float)rand()/RAND_MAX;
   base = 0.8; //starting point for damage
   max = 0.4; //maximum point for damage
   atkconst = 3; //Gives a little spice to the game
   defconst = 0.5;
   levelconst = 0.7;
   damage = round(((attack1+atkconst)/pow(defense2,defconst)+pow(level1,levelconst))*(base+max*chance));
   return damage;
}