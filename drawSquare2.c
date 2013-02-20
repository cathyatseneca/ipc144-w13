#include <stdio.h>
void drawTopBottom(int numStars){
  int i;
  for(i=0;i<numStars;i++){
    printf("*");
  }
  printf("\n");
}
void drawMiddle(int numStars){
  int i;
  printf("*");
  for(i=0;i<numStars-2;i++){
    printf(" ");
  }
  printf("*\n");
}
void drawSquare(int numStars){
  int i;
  drawTopBottom(numStars);
  for(i=0;i<numStars-2;i++){
    drawMiddle(numStars);
  }
  drawTopBottom(numStars);
}

/*below is not part of question*/
int main(void){
  int n;
  printf("enter number of stars: ");
  scanf("%d",&n);
  drawSquare(n);
}



