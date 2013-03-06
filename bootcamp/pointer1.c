#include <stdio.h>
/*
  this function will pass back the first and last digit of value through
  the pointers first and last
*/
void getFirstLastDigit(int value, int* first, int* last);

int main(void){
  int firstdigit, lastdigit,input;
  printf("This program will show you the first and last digit of a number\n");
  scanf("%d",&input);
  getFirstLastDigit(input,&firstdigit,&lastdigit);
  printf("first digit is %d\n",firstdigit);
  printf("last digit is %d\n",lastdigit);
}

void getFirstLastDigit(int value, int* first, int* last){
  *last=value%10;
  *first=value;
  while(*first >=10){
    *first=*first/10;
  }

}
