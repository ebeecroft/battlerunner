#include <stdlib.h>

//Prototype
int datagrabberfunc(char *argv[], int &counter); //Assigns data from ruby to a variable

int rubyinitializerfunc(int &health1, int &maxhealth, int &health2, int &damage1, int &damage2, int &speed2, int &level2, int &defense2, int &attack2, int &speed1, int &level1, int &experience, int &defense1, int &attack1, int &money, char *argv[])
{
   int count = 1; //Used only for Argv
   //Sets variable data from ruby program
   level1 =  datagrabberfunc(argv, count);
   attack1 = datagrabberfunc(argv, count);
   defense1 = datagrabberfunc(argv, count);
   speed1 = datagrabberfunc(argv, count);
   health1 = datagrabberfunc(argv, count);
   maxhealth = datagrabberfunc(argv, count);
   experience = datagrabberfunc(argv, count);
   money = datagrabberfunc(argv, count); //Not useful initially
   damage1 = datagrabberfunc(argv, count); //Not useful initially
   damage2 = datagrabberfunc(argv, count); //Not useful initially
   level2 = datagrabberfunc(argv, count);
   defense2 = datagrabberfunc(argv, count);
   attack2 = datagrabberfunc(argv, count);
   speed2 = datagrabberfunc(argv, count);
   health2 = datagrabberfunc(argv, count);
}
