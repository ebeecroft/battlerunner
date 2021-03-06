#include <stdlib.h>
#include <iostream>
#include <math.h>
double getChance();
double getHitChance();
double getEvade(int speed1, int speed2);
int getDamage(int attack1, int defense2, int level1);
int getDamage2(int attack1, int defense2, int level1, int level2);

void battle(int petStats[], int monsterStats[], int& petDamage, int& monsterDamage)
{
   //Seeding should only occur once per program execution
   double accuracyLevel = 0.0, petAccuracy = 0.0, monsterAccuracy = 0.0;
   double petEvade = 0.0, monsterEvade = 0.0;
   srand(time(0));
   monsterEvade = getEvade(petStats[3], monsterStats[3]);
   petEvade = getEvade(monsterStats[3], petStats[3]);
   accuracyLevel = getChance();
   petAccuracy = petEvade; //getHitChance();
   monsterAccuracy = monsterEvade; //getHitChance();
   if(petAccuracy >= accuracyLevel)
   {
      if(petStats[0] == monsterStats[0])
         petDamage = getDamage(petStats[1], monsterStats[2], petStats[0]);
      else
         petDamage = getDamage2(petStats[1], monsterStats[2], petStats[0], monsterStats[0]);
   }
   else
      petDamage = 0;

   if(monsterAccuracy >= accuracyLevel)
   {
      if(petStats[0] == monsterStats[0])
         monsterDamage = getDamage(monsterStats[1], petStats[2], monsterStats[0]);
      else
         monsterDamage = getDamage2(monsterStats[1], petStats[2], monsterStats[0], petStats[0]);
   }
   else
      monsterDamage = 0;
}

double getEvade(int speed1, int speed2)
{
   //Determines the evasion returned based on monster and pet speeds
   double monsterSpeed = speed2;
   double petSpeed = speed1;
   double evadeLevel = (monsterSpeed / petSpeed) * 100.0;
   if(evadeLevel > 90.0) evadeLevel = 90.0;
   else if(evadeLevel < 10.0) evadeLevel = 10.0;
   return evadeLevel;
}

double getChance()
{
   //Accuracy Level to check against
   double maxAccuracy = 100.0;
   double accuracyLevel = (maxAccuracy * rand()) / RAND_MAX;
   return accuracyLevel;
}

double getHitChance() 
{
   //Maximum Accuracy Level is 90%
   double minAccuracy = 1.0;
   double maxAccuracy = 89.0;
   double accuracyLevel = minAccuracy + (maxAccuracy * rand()) / RAND_MAX;
   return accuracyLevel;
}

int getDamage(int attack1, int defense2, int level1)
{
   //Maximum Damage is equal to petLevel + attack
   double minDamage = 1.0;
   double maxDamage = level1 + attack1;
   int mydamage = round(minDamage + ((maxDamage * rand()) / RAND_MAX)/defense2);
   return mydamage;
}

int getDamage2(int attack1, int defense2, int level1, int level2)
{
   //Maximum Damage is equal to petLevel + attack
   double minDamage = 1.0;
   double maxDamage = level1 + attack1;
   int absorb = level2 + defense2;
   int mydamage = round(minDamage + ((maxDamage * rand()) / RAND_MAX)/absorb);
   return mydamage;
}
