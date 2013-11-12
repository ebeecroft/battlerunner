#include <iostream>
#include <math.h>
#include <stdlib.h>
int main()
{
   //Pet Stats
   int p_level = 1;
   int p_atk = 1;
   double p_def = 1.0;

   //Monster Stats
   int m_level = 1;
   int m_atk = 1;
   double m_def = 1.0;

   //Damage
   int p_damage = 0;
   int m_damage = 0;

   /*****Hits and Attacks Useful till final hit*/
   m_damage = round((((m_atk + 3)/pow(p_def, 0.5))+pow(m_level,0.7))*.8);
   p_damage = round((((p_atk + 3)/pow(m_def, 0.5))+pow(p_level,0.7))*.8);
   std::cout << "Pet Damage dealt is: " << p_damage << std::endl;
   std::cout << "Monster Damage dealt is: " << m_damage << std::endl;
   return 0;
}
