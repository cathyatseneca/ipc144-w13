#include <stdio.h>
int main(void){
  int year;
  
  FILE* fp;
  printf("Please enter a year: ");
  scanf("%d",&year);

  fp=fopen("magazine.dat","r");
  if(fp){
    int i;
    char magName[41];
    char title[61];
    int magYear;
    printf("Headline articles for %d\n",year);
    while(fscanf(fp,"%[^;];%[^;];%d\n", magName, title, &magYear)==3){
      if(year == magYear){
        printf("%s - %s\n", magName, title);
      }
    }
  }
  else{
    printf("cannot open file magazine.dat\n");
  }
}
    
