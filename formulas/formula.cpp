#include <iostream>
#include <math.h>
#include <stdlib.h>

//Prototypes for functions
double hitfunc(int speed1, int speed2); //Takes in the speed of two combatents
double chancefunc(); //Returns a random number 
int damagefunc(int attack1, int defense2, int level1); //Takes in the attack and level of one combatent and defense of other
int coinsfunc(int level2); //Takes in the second combatents level
int expgfunc(int level1); //Takes in the first combatents level
int levelupfunc(int level1); //Takes in the first combatents level
int statupfunc1(int stat1); //Takes in the first combatents stats
int statupfunc2(int stat1); //Takes in the first combatents stats
int startbattle(int health1, int attack1, int defense1, int speed1, int level1, int damage1, int health2, int attack2, int defense2, int speed2, int level2, int damage2); //Takes in all of the two combatents stats

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
      int p_hp, m_hp, p_damage, m_damage, m_spd, m_level, m_def, m_atk, p_spd, p_level, p_exp, p_def, p_atk, coins = 0;
      
      p_hp = 10;
      m_hp = 10;
      
      //Start of Battle
      if((p_hp > 0 && m_hp > 0)) //Do this if both hps are greater then Zero
      {
         double mhit, phit, pchance, mchance = 0;
         //Calculate hit(Always running)
         mhit = hitfunc(m_spd, p_spd);
         phit = hitfunc(p_spd, m_spd);

         //Calculate chance(Always running)
         pchance = chancefunc();
         mchance = chancefunc();

         //Calculate Damage(Only if hit succeeds)
         if(mhit >= mchance)
            m_damage = damagefunc(m_atk, p_def, m_level);
      
         if(phit >= pchance)
            p_damage = damagefunc(p_atk, m_def, p_level);
      }

      //End of Battle
      if((p_hp == 0 || m_hp == 0))
      {
         if((p_hp == 0 && m_hp == 0) || (p_hp > 0 && m_hp == 0)) //Win or Draw condition
         {
            int levelup, expgain, atkup, defup, spdup, hpup = 0;
            if(p_hp > 0)
            {
               //Calculate Coin(Win only)
               coins = coinsfunc(m_level);
            }

            //Calculate Experience(Win/Draw)
            expgain = expgfunc(p_level);
            levelup = levelupfunc(p_level);
            p_exp += expgain;

            if(p_exp > levelup)
            {
               //Calculate Stats(Levelup pet only)
               atkup = statupfunc1(p_atk);
               defup = statupfunc1(p_def);
               spdup = statupfunc2(p_spd);
               hpup = statupfunc2(p_hp);

               //Update stats
               p_level += 1;
               p_atk += atkup;
               p_def += defup;
               p_spd += spdup;
               p_hp += hpup;
            }
         }
      }
   }
   //Return the data to the ruby function upon exit
   return 0;
}
