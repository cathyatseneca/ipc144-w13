#include <stdio.h>

#define ARRAYCAPACITY 55

int main(void){
  //to declare an array, use following syntax:
  //int arrayname[thecapacity];
  //in C99, you can only use constants for capacity, C11 lets you use 
  //variables
  
  int numPens[ARRAYCAPACITY];  //array of integers, ARRAYCAPACITY elements 
                               //available can hold ARRAYCAPACITY integers
  int i;
  //read in ARRAYCAPACITY numbers into the array
  for(i=0;i<ARRAYCAPACITY;i++){
     printf("enter a number: ");
     scanf("%d",&numPens[i]);
  }
  //print those numbers
  for(i=0;i<ARRAYCAPACITY;i++){
     printf("%d\n",numPens[i]);
  }

}
