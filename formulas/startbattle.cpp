//Prototypes for functions
double hitfunc(int speed1, int speed2); //Takes in the speed of two combatents
double chancefunc(); //Returns a random number 
int damagefunc(int attack1, int defense2, int level1); //Takes in the attack and level of one combatent and defense of other

int startbattlefunc(int health1, int attack1, int defense1, int speed1, int level1, int &damage1, int health2, int attack2, int defense2, int speed2, int level2, int &damage2) //Takes in all of the two combatents stats
{
   //Start of Battle
   if((health1 > 0) && (health2 > 0)) //Do this if both hps are greater then Zero
   {
      double mhit, phit, pchance, mchance = 0;
      //Calculate hit(Always running)
      mhit = hitfunc(speed2, speed1);
      phit = hitfunc(speed1, speed2);

      //Calculate chance(Always running)
      pchance = chancefunc();
      mchance = chancefunc();

      //Calculate Damage(Only if hit succeeds)
      if(mhit >= mchance)
         damage2 = damagefunc(attack2, defense1, level2);
      
      if(phit >= pchance)
         damage1 = damagefunc(attack1, defense2, level1);
   }
   return 0;
}
