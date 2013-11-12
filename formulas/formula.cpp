#include <iostream>
#include <math.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
   //Checks the arguements of argc to see if they are correct
   if (argc < 7 || argc > 7) 
   {
      std::cout << "Monster is represented by m, Pet is represented by p.\n";
      std::cout << "Usage is p_level, p_attack, p_defense, m_level, m_attack, m_defense.\n";
      exit(0);
   }
   else
   {
      //Sets all local variables to 0 first
      int p_level, p_atk, p_damage, m_level, m_atk, m_damage = 0;
      double p_def, m_def = 0;

      std::cout << "p_Level is: " << p_level << std::endl;

      //Pet Stats
      p_level = argv[1];
      p_atk = argv[2];
      p_def = argv[3];

      //Monster Stats
      m_level = argv[4];
      m_atk = argv[5];
      m_def = argv[6];

      //Attacks useful only if hit ratio is greater then random number else no damage is dealt
      m_damage = round((((m_atk + 3)/pow(p_def, 0.5))+pow(m_level,0.7))*.8);
      p_damage = round((((p_atk + 3)/pow(m_def, 0.5))+pow(p_level,0.7))*.8);
      std::cout << "Pet Damage dealt is: " << p_damage << std::endl;
      std::cout << "Monster Damage dealt is: " << m_damage << std::endl;
   }
   //m_damage and p_damage must be returned at the end of the fight round
   return 0;
}
