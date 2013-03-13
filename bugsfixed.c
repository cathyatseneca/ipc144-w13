#include <stdio.h>
/*This program will sort a number of values (max 100) entered by the user 
  and show it to them*/

#define MAX 100
/*function reads numbers into arr up ot max and returns number of values
  successfully stored*/
int readNumbers(int arr[],int max);
void sortNumbers(int arr[], int size);
void writeNumbers(int arr[],int size);

int main(void){
   int array[MAX];  //the array
   int size;        //how much array is currently holding
   size = readNumbers(array,MAX);

   writeNumbers(array,size);
//   sortNumbers(array,size);
//   writeNumbers(array,size);
}

int readNumbers(int arr[],int max){
  int i=0;
  printf("enter an integer (non-integer to stop): ");
  while(scanf("%d",&arr[i])==1){
    printf("enter an integer (non-integer to stop): ");
    i++;    
  }
  return i;
}
void sortNumbers(int arr[], int size){
  int i,j;
  int tmp;
  int done=0;
  for(i=0;i<size;i++){
    tmp==arr[i];
    for(i=i-1;j<size+1 && tmp < arr[j];j++){
       arr[j]=arr[j-1];
    }
  }   
}

void writeNumbers(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d\n",arr[i]);
  }
}


