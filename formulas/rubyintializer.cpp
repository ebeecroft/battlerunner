#include <stdlib.h>

//Prototype
int datagrabberfunc(char *argv[], int &counter); //Assigns data from ruby to a variable

int rubyinitializerfunc(int &health1, int &maxhealth, int &level1, int &experience, int &attack1, int &defense1, int &speed1, int &damage1, int &health2, int &level2, int &attack2, int &defense2, int &speed2, int &damage2, int &money, char *argv[])
{
   int count = 1; //Used only for Argv
   //Sets variable data from ruby program
   level1 =  datagrabberfunc(argv, count); //Argv[1] is p_level
   attack1 = datagrabberfunc(argv, count); //Argv[2] is p_atk
   defense1 = datagrabberfunc(argv, count); //Argv[3] is p_def
   speed1 = datagrabberfunc(argv, count); //Argv[4] is p_spd
   health1 = datagrabberfunc(argv, count); //Argv[5] is p_hp
   maxhealth = datagrabberfunc(argv, count); //Argv[6] is p_maxhp
   experience = datagrabberfunc(argv, count); //Argv[7] is p_exp **Mandatory**
   money = datagrabberfunc(argv, count); //Not useful initially
   damage1 = datagrabberfunc(argv, count); //Not useful initially
   damage2 = datagrabberfunc(argv, count); //Not useful initially
   level2 = datagrabberfunc(argv, count); //Argv[11] is m_level
   defense2 = datagrabberfunc(argv, count); //Argv[12] is m_def
   attack2 = datagrabberfunc(argv, count); //Argv[13] is m_atk
   speed2 = datagrabberfunc(argv, count); //Argv[14] is m_spd
   health2 = datagrabberfunc(argv, count); //Argv[15] is m_hp
}
