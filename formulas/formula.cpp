#include <stdlib.h>
#include <iostream>
void gainStats(int petStats[], int monsterLevel, int& coins, int& experienceGained, int statsGained[]);
void battle(int petStats[], int monsterStats[], int& petDamage, int& monsterDamage);
int main(int argc, char* argv[])
{
   if(argc == 9)
   {
      //Battle Code here
      int petDamage = 0, monsterDamage = 0;
      int count = 1;
      int limit = 4;
      int petStats[limit], monsterStats[limit];
      //Initializes the petStats and monsters
      for(int index = 0; index < limit; index++)
      {
         petStats[index] = atoi(argv[count]);
         monsterStats[index] = atoi(argv[4 + count]);
         count++;
      }
      battle(petStats, monsterStats, petDamage, monsterDamage);
      std::cout << petDamage << "," << monsterDamage;
   }
   else if(argc == 5)
   {
      //Stats code here
      int coins = 0;
      int experienceGained = 0;
      int count = 1;
      int limit = 3;
      int statsGained[5];
      int petStats[limit];

      //Initializes the petStats
      for(int index = 0; index < limit; index++)
      {
         petStats[index] = atoi(argv[count]);
         count++;
      }
      int monsterLevel = atoi(argv[count]);

      //Initialized statsGained
      for(int index = 0; index < 5; index++)
      {
         statsGained[index] = 0;
      }

      gainStats(petStats, monsterLevel, coins, experienceGained,statsGained);
      //Returning level, expGained, coins, attack, defense, speed, health, maxHealth
      std::cout << petStats[0] << "," << experienceGained << "," << coins << ","
      << statsGained[0] << "," << statsGained[1] << "," << statsGained[2] << ","
      << statsGained[3] << "," << statsGained[4];
   }
}
