#include <stdio.h>
/*This program reads in an ip address and then displays
  each of its 4 values*/
int main(void){
  int part1;
  int part2;
  int part3;
  int part4;

  printf("please enter an ip address\n");
  scanf("%d.%d.%d.%d",&part1, &part2, &part3, &part4);
//  scanf(" ");
  printf("part 1: %d\n",part1);
  printf("part 2: %d\n",part2);
  printf("part 3: %d\n",part3);
  printf("part 4: %d\n",part4);

  printf("please enter an ip address\n");
  scanf("%d.%d.%d.%d",&part1, &part2, &part3, &part4);
//  scanf(" ");
  printf("part 1: %d\n",part1);
  printf("part 2: %d\n",part2);
  printf("part 3: %d\n",part3);
  printf("part 4: %d\n",part4);

}
