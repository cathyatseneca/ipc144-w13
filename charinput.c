#include <stdio.h>

int main(void){
  char operator;
  printf("Please enter an operator (+ or -): ");
  scanf("%c",&operator);
  while(operator != '+' && operator !='-'){
    printf("you need to enter a + or a - \n");
    printf("Please enter an operator (+ or -): ");
    scanf(" %c",&operator);
  }
  printf("you entered %c\n",operator);
}
