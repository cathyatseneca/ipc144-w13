#include <stdio.h>
void drawSquare(int numStars){
  int i,j;
  /*this loop runs numStars times*/
  /*for any loop to run n times, start at 0
    use i < n as the condition*/
  /*draw the top of the box*/
  for(i=0;i<numStars;i++){
    printf("*");
  }
  printf("\n");
  /*draw the middle of the box*/
  
  for(i=0;i<numStars-2;i++){
    //every time this loop runs, it draws one line
    printf("*");
    for(j=0;j<numStars-2;j++){
      printf(" ");
    }
    printf("*");
    printf("\n");
  }

  /*draw the bottom of the box*/
  for(i=0;i<numStars;i++){
    printf("*");
  }
  printf("\n");  
}

/*below is not part of question*/
int main(void){
  int n;
  printf("enter number of stars: ");
  scanf("%d",&n);
  drawSquare(n);
}



