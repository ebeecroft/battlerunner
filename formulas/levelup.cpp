#include <stdlib.h>
#include <ctime>
#include <math.h>

int levelupfunc(int level1)
{
   //Performs calculation to get level up
   int lvlup, base = 0;
   double levelconst = 0.0;
   base = 100; //starting point for levelup
   levelconst = 1.75; //Gives a little spice to the game
   lvlup = round(pow(level1, levelconst)*base);
   return lvlup;
}
