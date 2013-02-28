#include <stdio.h>

/*this program will prompt the user to enter two values.  It will then swap
  their values if the first number is not smaller than the second*/

int getValues(int* a,int* b);
void swap(int* a,int* b);

int main(void){
  int x,y;
  printf("Enter two numbers:");
  if(getValues(&x,&y) == 0){
    swap(&x,&y);
  }
  printf("The smaller number is: %d\n", x);
  printf("The bigger number is: %d\n", y);
}

/*this function will read and pass back two values.  If the first value
  is smaller than the second, it will return a true value, false otherwise*/
int getValues(int *a,int* b){
}

/*this function will swap two values.  In other words the variable pointed
  to by a will hold the value in the variable pointed to by b and vice 
  versa*/
void swap(int* a,int* b){
}
