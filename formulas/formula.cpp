#include <iostream>
#include <math.h>
#include <stdlib.h>
int main()
{
   //Pet Stats
   double p_hit=0.0;
   int p_damage=0;
   int p_level=1;
   int p_atk=5;
   double p_def = 2.0;
   int p_spd=0;
   int p_hp=0;

   //Monster Stats
   double m_hit=0.0;
   int m_damage=0;
   int m_level=1;
   int m_atk = 5;
   double m_def = 2.0;
   int m_spd =0;
   int m_hp=0;

   /*****Hits and Attacks Useful till final hit*/
   //hit = max(0.2, ((2spdy-spde)/spdy)*0.4 +0.5 rand())
   //damage = round( ((atk + 3)/(ddef^(0.5)))+ lvl^(0.7))*(0.8);
   m_damage = round((m_atk + 3)/sqrt(p_def)+m_level)*(.8+.4*srand(1));
   p_damage = round((p_atk + 3)/sqrt(m_def)+p_level)*(.8+.4*random());
   std::cout << "Pet Damage dealt is: " << p_damage << std::endl;
   std::cout << "Monster Damage dealt is: " << m_damage << std::endl;
   return 0;
}
