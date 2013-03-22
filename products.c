#include <stdio.h>
#include <stdlib.h>

int main(void){
  FILE* fp;
  //open the file
  fp=fopen("products.txt","r");
  int i=0;
  int numProducts=0;

  //process the file
  if(fp==0){
    printf("could not open products.txt\n");
    exit(0);
  }  
  else{
    int productNumber[1000];
    char description[1000][60];
    double price[1000];
    while(fscanf(fp,"%d;%[^;];%lf\n",&productNumber[i],description[i],&price[i])==3){
      i++;
    }
    numProducts=i;
    for(i=0;i<numProducts;i++){
      printf("product number: %d, description: %s, price: $%.2lf\n",productNumber[i],description[i],price[i]);
    }

  }
  //close the file
}

void sortProducts(char description[][60],double price[],int productNumber[], int sz){
  int i,j;
  char tmp[60];
  for(i=0;i<sz;i++){
    for(j=0;j<sz-1;j++){
      if(strcmp(arr[j],arr[j+1]) > 0){
        strcpy(tmp,arr[j]);           //use strcpy not =, = does not work
        strcpy(arr[j],arr[j+1]);      //on strings!!!!!!!!!!!!
        strcpy(arr[j+1],tmp);
      }
    }
  }
}
