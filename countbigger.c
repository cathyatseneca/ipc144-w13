#include <stdio.h>

int main(void){
  printf("This program will tell you how many values you enter is");
  printf("bigger than 50\n\n");
  int input;          //stores input
  int numBigger=0;    //counts how many values are bigger than 50

  printf("Please enter a number (0 or negative to stop): ");
  scanf("%d",&input);
  while(input > 0){
    if(input > 50){
      numBigger++;
    }
    printf("Please enter a number (0 or negative to stop): ");
    scanf("%d",&input); 
  }
  printf("You entered %d values bigger than 50\n",numBigger);
}
 
