#include <stdio.h>
#include <stdlib.h>
#define MAX 50001

void minMax(int arr[],int sz,int* min, int* max){
  int i;
  *min=arr[0];  //prime loop... must make sure *min and *max
  *max=arr[0];  //has something to compare against

  for(i=0;i<sz;i++){
    if(arr[i] < *min){
      *min=arr[i];
    }
    if(arr[i] > *max){
      *max=arr[i];
    } 
  }
}
void bubble(int array[],int sz){
  int i,j;
  //do below sz time
  for(i=0;i<sz;i++){
    //for every  element in the array,
    for(j=0;j<sz-1;j++){
      //swap if they and their neighbor are not in order
      if(array[j] > array[j+1]){
         int tmp=array[j];
         array[j]=array[j+1];
         array[j+1]=tmp;
      }   
    }
  }
}

void minMax2(int arr[],int sz,int* min, int* max){
  bubble(arr,sz);
  *min=arr[0];
  *max=arr[sz-1];
}
int main(void){
  int arr[MAX];
  int i;
  int a;
  int b;
  for(i=0;i<MAX;i++){
    arr[i]=rand();
  }
  minMax2(arr,MAX,&a, &b);
  printf("smallest is: %d\n",a);
  printf("biggest is: %d\n",b);
}
