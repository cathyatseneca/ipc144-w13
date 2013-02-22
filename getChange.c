/*Write a function called getChange that will calculate the number of each
type of coins (toonies, loonies, quarters, dimes, nickels) necessary to 
make up an amount of money.  Given that we no longer have pennies in
Canada, we should apply the new rules of change giving where the value is
rounded down to the nearest 5 cent if the amt ends in a 1, 2, 6 or 7.  It
is rounded up if it ends in 3,4,8 or 9.*/

/* we return nothing because we have to give back 5 results (the number of
each of the 5 types of coins)*/
void getChange(double moneyAmt,int* toonies, int* loonies, int* quarters,
                                     int* dimes, int* nickels){
   int moneyInPennies;  /*stores moneyAmt as number of cents*/

   moneyInPennies = moneyAmt * 100;  //2.55 is stored as 255

   int moneyInNickels = moneyInPennies/5; 
   //round our pennies first
   if (moneyInPennies%5 >= 3){
     moneyInNickels = moneyInNickels + 1;
   }  
   moneyInPennies = moneyInNickels * 5;


   *toonies = moneyInPennies / 200;  //dereference toonies to get actual
                                     //variable to assign to

   moneyInPennies = moneyInPennies % 200;  //left over after giving out
                                           //toonies

  *loonies = moneyInPennies / 100;    //how may loonies

  moneyInPennies = moneyInPennies % 100;  //left over after giving out 
                                          //loonies
  *quarters = moneyInPennies / 25;
  moneyInPennies = moneyInPennies % 25;

  *dimes = moneyInPennies / 10;
  moneyInPennies = moneyInPennies % 10;

  *nickles = moneyInPennies / 5;
  moneyInPennies = moneyInPennies % 5;

}
