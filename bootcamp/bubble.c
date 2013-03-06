#include <stdio.h>
int swap(int* a,int* b);
void bubbleSort(int arr[],int size);
int readArray(int arr[],int maxSize);

/*don't alter this main*/
int main(void){
  int array[200];
  int sz;
  int i;
  printf("This program will sort some numbers that you enter\n");
  sz=readArray(array,200);
  bubbleSort(array,sz);
  printf("The numbers you entered in sorted order is:\n" );
  for(i=0;i < sz;i++){
    printf("%d\n",array[i]);
  }
}

/*Don't alter this function.  This function reads values into an array and 
return the number of values  read in*/
int readArray(int arr[],int maxSize){
  int numValues=0;
  printf("Please enter some values, use any non-numeric character to exit\n");
  /*the loop stops if the user tries to enter more than maxSize value or
   if they enter a non-numeric value*/
  while(numValues < maxSize && scanf("%d",&arr[numValues])==1){
    numValues++;
  }
  return numValues;
}


/*this function swaps the value pointed to by a with the value 
pointed to by b*/
int swap(int* a,int* b){

}
/*this is a not a fast sorting algorithm, but it is one of the easiest
  to understand.  You can check out an animation showing how this 
  algorithm works in detail here:

  http://cathyatseneca.github.com/DSAnim/web/bubble.html

*/
void bubbleSort(int arr[],int sz){
    /*go through the entire array sz times*/
    /*for each element of the array if they are not in order, swap them*/

}
