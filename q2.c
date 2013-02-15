#include <stdio.h>

int main(void){
   int value;
   printf("please enter a number between 1 and 12: ");
   scanf("%d",&value);
   for(int i=0;i<12;i++){
     printf("%d * %d = %d\n",value, i+1, value*(i+1));
   }
}
