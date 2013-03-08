#include <stdio.h>
#define CAP 10
#define CAP2 17

void printArray(int array[],int sz);
void bubble(int array[],int sz);

int main(void){
  int array[CAP]={10,3,5,2,1,18,15,23,62,11};
  int array2[CAP2]={10,3,5,2,1,18,15,23,62,11,
                     33,22,55,66,77,88,99};
  bubble(array,CAP);
  printArray(array,CAP);

  bubble(array2,CAP2);
  printArray(array2,CAP2);
}

/*this function prints the values in the array
  such that it prints 5 numbers on one line, space separated
*/
void printArray(int array[],int sz){
  int i;
  for(i=0;i<sz;i++){
    printf("%d ",array[i]);
    if(i%5==4){
      printf("\n");
    }
  }
  //same as if(sz%5)
  if(sz%5 != 0){
    printf("\n");
  }
}
void bubble(int array[],int sz){
  int i,j;
  //do below sz time
  for(i=0;i<sz;i++){
    //for every  element in the array, 
    for(j=0;j<sz-1;j++){
      //swap if they and their neighbor are not in order
      if(array[j] < array[j+1]){
         int tmp=array[j];
         array[j]=array[j+1];
         array[j+1]=tmp;
      }
    }
  }
}

