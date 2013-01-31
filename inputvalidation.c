#include <stdio.h>
int main(void){
  int hour;
  printf("Please enter an hour (0-23)");
  scanf("%d",&hour);
  
  /*the following code will run over and over as long as expression
    (hour>23)||(hour<0) is true
    this expression is validation check. the values that are NOT valid
    are negatives and numbers bigger than 23
  */
  while((hour > 23) || (hour < 0)){
     printf("value must be between 0 and 23\n");
     printf("Please enter an hour (0-23)");
     scanf("%d",&hour);
  }
  printf("You entered %d\n",hour);
}
