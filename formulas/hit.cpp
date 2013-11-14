#include <iostream>
#include <stdlib.h>
int main()
{
   //Checks the arguements of argc to see if they are correct
   if (argc < 3 || argc > 3) 
   {
      std::cout << "Monster is represented by m, Pet is represented by p.\n";
      std::cout << "Usage is p_level, p_attack, p_defense, m_level, m_attack, m_defense.\n";
      exit(0);
   }
   else
   {
      double p_hit, m_hit, min = 0.0;
      int p_spd, m_spd = 0;
      p_spd = 1;
      m_spd = 1;
      min = 0.2;
      if (!(p_spd == 0 || m_spd == 0))
      {
      p_hit = ((2 * p_spd - m_spd)/p_spd)*(.4);
      m_hit = ((2 * m_spd - p_spd)/m_spd)*(.4);
      if (p_hit <= min)
         p_hit = min;

      if (m_hit <= min)
         m_hit = min;

      std::cout << "Pet Hit percentage is: " << p_hit << std::endl;
      std::cout << "Monster Hit percentage is: " << m_hit << std::endl;

      if (m_hit >= 0.5)
         std::cout << "Hit was struck" << std::endl;
      else
         std::cout << "Monster missed, (no damage)" << std::endl;

      if (p_hit >= 0.5)
         std::cout << "Hit was struck" << std::endl;
      else
         std::cout << "Pet missed, (no damage)" << std::endl;
      }
      else
      {
         std::cout << "A zero was detected in the formula" << std::endl;
         exit(0);
      }
      //Sets all local variables to 0 first
      /*int p_level, p_atk, p_damage, m_level, m_atk, m_damage = 0;
      double p_def, m_def = 0;

      //Pet Stats
      p_level = atoi(argv[1]);
      p_atk = atoi(argv[2]);
      p_def = atoi(argv[3]);

      //Monster Stats
      m_level = atoi(argv[4]);
      m_atk = atoi(argv[5]);
      m_def = atoi(argv[6]);

      //Attacks useful only if hit ratio is greater then random number else no damage is dealt
      m_damage = round((((m_atk + 3)/pow(p_def, 0.5))+pow(m_level,0.7))*(.8+.4*rand()));
      p_damage = round((((p_atk + 3)/pow(m_def, 0.5))+pow(p_level,0.7))*(.8+.4*rand()));
      std::cout << "Pet Damage dealt is: " << p_damage << std::endl;
      std::cout << "Monster Damage dealt is: " << m_damage << std::endl;*/
   }
   //m_damage and p_damage must be returned at the end of the fight round
   return 0;
}