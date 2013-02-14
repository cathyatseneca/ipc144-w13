#include <stdio.h>
/*write a program that will track the sum of
  a series of integers the user will enter and print
  it at the end*/
int main(void){
  int sumTotal=0;   //this variable holds the sum of the values entered
  int inputValue;   //this variable is used to store user input
  int keepGoing=1;    //this variable is true if we want to enter another
                    //value

  /*PLEASE NOTE:  THE FOLLOWING IS ACTUALLY BETTER DONE USING A
    WHILE LOOP instead of a DO-WHILE.  This is just to illustrate
    its usage*/
  do{
    printf("enter a number (any other value to stop): ");
    /*scanf evaluates to number of variables properly set.
      Thus, if someone enters a number, scanf will evaluate 
      to 1.  Otherwise it evaluates to 0.  Thus, if someone
      entered a non-number, scanf will evaluate to 0, causing
      the continuation condition (keepGoing != 0) to become
      false*/
    keepGoing=scanf("%d",&inputValue);
    if(keepGoing){
      sumTotal += inputValue;
    }
  }while(keepGoing != 0);
  printf("Sum is: %d\n",sumTotal);
}
   
