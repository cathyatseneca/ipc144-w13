#include <stdio.h>
void print(int arr[]){
  int i;
  for(i=0;i<3;i++){
    printf("%d\n", arr[i]);
  }
}
int main(void){
  int array[3]={5,10,15};
  int* p = &array[0];
  *p++;
  print(array);
  *p=*p+1;
  print(array); 
}
