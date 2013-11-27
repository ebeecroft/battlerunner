//Prototypes for functions
int coinsfunc(int level2); //Takes in the second combatents level
int expgfunc(int level2); //Takes in the second combatents level
int levelupfunc(int level1); //Takes in the first combatents level
int statupfunc1(int stat1); //Takes in the first combatents stats
int statupfunc2(int stat1); //Takes in the first combatents stats

int endbattlefunc(int &health1, int &maxhealth, int &attack1, int &defense1, int &speed1, int &level1, int &experience, int &money, int health2, int level2) //Takes in some of the combatents stats
{

   //#{p_level} #{p_atk} #{p_def} #{p_spd} #{p_hp} #{p_maxhp} #{p_exp} #{coins} #{p_damage} #{m_damage} #{m_level} #{m_def} #{m_atk} #{m_spd} #{m_hp}
   //Win or Draw condition
   if(((health1 == 0) && (health2 == 0)) || ((health1 > 0) && (health2 == 0)))
   {
      int levelup, expgain, atkup, defup, spdup, hpup, maxhpup = 0;
      if(health1 > 0)
      {
         //Calculate Coin(Win only)
         money = coinsfunc(level2);
      }

      //Calculate Experience(Win/Draw)     
      expgain = expgfunc(level2);
      levelup = levelupfunc(level1);
      experience += expgain;

      if(experience > levelup)
      {
         //Calculate Stats(Levelup pet only)
         atkup = statupfunc1(attack1);
         defup = statupfunc1(defense1);
         spdup = statupfunc2(speed1);
         hpup = statupfunc2(health1);
         maxhpup = statupfunc2(maxhealth);

         //Update stats
         level1 += 1;
         attack1 += atkup;
         defense1 += defup;
         speed1 += spdup;
         health1 += hpup;
         maxhealth += maxhpup;
      }
   }
   return 0;
}
