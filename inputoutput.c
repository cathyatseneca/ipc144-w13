/*
  This program will ask the user to enter in 2 numbers and 
  then it will calculate its sum, difference, production, and
  quotient

  Author: Catherine Leung
*/
#include <stdio.h>

int main(void){
  int number1; //this is a variable, that will hold the first number the user enters
  int number2; //this is the variable that will hold the 2nd number the user enters 
  printf("Please enter a number: ");  //ask for number
  scanf("%d",&number1);  //reads a number in from standard input
                         //%d is a format code that matches the data type
                         //of number1
                         //& is the address of operator
                         //we are not passing the variable number1 into the 
                         //function but rather its location in memory
  printf("Please enter another number: ");
  scanf("%d",&number2);
  printf("%d + %d = %d \n",number1,number2,number1+number2);
  printf("%d - %d = %d \n",number1,number2,number1-number2);
  printf("%d * %d = %d \n",number1,number2,number1*number2);
  printf("%d / %d = %f \n",number1,number2,(float)number1/number2);
}
