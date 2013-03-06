#include <stdio.h>

#define ARRAYCAPACITY 5


int main(void){
  //to declare an array, use following syntax:
  //int arrayname[thecapacity];
  //in C99, you can only use constants for capacity, C11 lets you use 
  //variables
  
  int numPens[ARRAYCAPACITY];  //array of integers, 20 elements available
                               //can hold 20 integers
  int i;
  //read in 20 numbers into the array
  for(i=0;i<ARRAYCAPACITY;i++){
     printf("enter a number: ");
     scanf("%d",&numPens[i]);
  }


  //print those numbers
  for(i=0;i<ARRAYCAPACITY;i++){
     printf("%d\n",numPens[i]);
  }



}
