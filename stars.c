#include <stdio.h>

int main(void){
  int numStars;
  int i;
  printf("please enter how many stars to draw: ");
  scanf("%d",&numStars);
  /*want a loop that runs numStars time*/
  /*we need a counter that keeps track of how many times
    we have run the loop*/
  /*NOTE:  start counting loops that run n times from 0*/
  for(i=0;i<numStars;i++){
    printf("*");
  }
  printf("\n");

}
