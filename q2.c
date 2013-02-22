#include <stdio.h>

int main(void){
   int value;
   int i;
   printf("please enter a number between 1 and 12: ");
   scanf("%d",&value);
   for(i=0;i<12;i++){
     printf("%d * %d = %d\n",value, i+1, value*(i+1));
   }
}
