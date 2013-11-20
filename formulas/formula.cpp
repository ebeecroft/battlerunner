#include <iostream>
#include <stdlib.h>

//Prototypes for functions
int startbattlefunc(int health1, int attack1, int defense1, int speed1, int level1, int &damage1, int health2, int attack2, int defense2, int speed2, int level2, int &damage2); //Takes in all of the two combatents stats
int endbattlefunc(int &health1, int &maxhealth, int &attack1, int &defense1, int &speed1, int &level1, int &experience, int &money, int health2, int level2); //Takes in some of the combatents stats

int main(int argc, char* argv[])
{
   //Checks the arguements of argc to see if they are correct
   if (argc < 16 || argc > 16) 
   {
      std::cout << "Monster is represented by m, Pet is represented by p.\n";
      std::cout << "Usage is p_level, p_attack, p_defense, m_level, m_attack, m_defense.\n";
      exit(0);
   }
   else
   {
      //Variables specific to the general formula
      int p_hp, p_maxhp, m_hp, p_damage, m_damage, m_spd, m_level, m_def, m_atk, p_spd, p_level, p_exp, p_def, p_atk, coins = 0;

      //Sets variable data from ruby program
      p_level =  atoi(argv[1]);
      p_atk = atoi(argv[2]);
      p_def = atoi(argv[3]);
      p_spd = atoi(argv[4]);
      p_hp = atoi(argv[5]);
      p_maxhp = atoi(argv[6]);
      p_exp = atoi(argv[7]);
      coins = atoi(argv[8]); //Not useful initially
      p_damage = atoi(argv[9]); //Not useful initially
      m_damage = atoi(argv[10]); //Not useful initially
      m_level = atoi(argv[11]);
      m_def = atoi(argv[12]);
      m_atk = atoi(argv[13]);
      m_spd = atoi(argv[14]);
      m_hp = atoi(argv[15]);

      //The beginning of the battle between a pet and a monster      
      startbattlefunc(p_hp, p_atk, p_def, p_spd, p_level, p_damage, m_hp, m_atk, m_def, m_spd, m_level, m_damage);

      //The end of the battle between a pet and a monster
      if ((p_hp == 0) || (m_hp == 0))
      {
         endbattlefunc(p_hp, p_maxhp, p_atk, p_def, p_spd, p_level, p_exp, coins, m_hp, m_level);
         std::cout << p_hp << "," << p_maxhp << "," << p_atk << "," << p_def << "," << p_spd << "," << p_level << "," << p_exp << "," << coins;
         //std::cout << all of the values you need with a comma between each (no spaces)   "1,2,3,4"
      }
      else
      {
          std::cout << p_damage << "," << m_damage;
      }

      /*for (int iterator = 1; iterator < argc; iterator++)
      {
         std::cout << argv[iterator];
         if (iterator != argc-1)
            std::cout << ",";
      }*/
      //std::cout << "hello world";
   }
   //Return the data to the ruby function upon exit
   return 0;
}
