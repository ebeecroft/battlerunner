#include <stdlib.h>
#include <iostream>
#include <math.h>
int getCoins(int level);
int getExperience(int level);
int getStatIncrease(int level);
int getLevelUp(int level);

void gainStats(int petStats[], int monsterLevel, int& coins, int& experienceGained, int statsGained[])
{
   int levelUp = 0;
   srand(time(0));
   if(petStats[2] > 0)
      coins = getCoins(monsterLevel);

   experienceGained = getExperience(monsterLevel);
   levelUp = getLevelUp(petStats[0]);
   int totalExperience = petStats[1] + experienceGained;
   std::cout << "My total experience is: " << totalExperience << std::endl;
   if(totalExperience > levelUp)
   {
      statsGained[0] = getStatIncrease(monsterLevel);
      statsGained[1] = getStatIncrease(monsterLevel);
      statsGained[2] = getStatIncrease(monsterLevel);
      statsGained[3] = getStatIncrease(monsterLevel);
      statsGained[4] = getStatIncrease(monsterLevel);
      petStats[0]++;
   }
}

int getCoins(int level)
{
   //Calculates the coins based on the opponents level
   double minCoins = 5.0;
   double maxCoins = 15.0 * level;
   int coins = round(minCoins + (maxCoins * rand()) / RAND_MAX);
   return coins;
}

int getExperience(int level)
{
   //Calculates the experience based on the opponents level
   double minExperience = 15.0;
   double maxExperience = 35.0 * level;
   int experience = round(minExperience + (maxExperience * rand()) / RAND_MAX);
   return experience;
}

int getStatIncrease(int level)
{
   //Calculates the stat increase based on the opponents level
   double maxStat = 2.0 * level;
   int stat = round((maxStat * rand()) / RAND_MAX);
   return stat;
}

int getLevelUp(int level)
{
   //Calculates levelUp experience based on the pets level
   double minExperience = 100.0;
   double levelConstant = 1.75;
   int levelUp = round(pow(level, levelConstant) * minExperience);
   return levelUp;
}
