/*This program will ask the user to enter a number
  and it will print out whether the number is odd
  or even*/

#include <stdio.h>

int main(void){
  int number;  //value user will enter
  printf("please enter a number: ");
  scanf("%d",&number);
  
  /* if(expression is true) { 
       do this code
     }
     else{
       do this other code
     }
  */

  if (number % 2 == 1){
     printf("%d is odd\n",number);
  }
  else{
    printf("%d is even\n",number);
  }
}
