#include <string.h>
#include <stdio.h>
void reverseString(char s[]){
  int length=strlen(s);
  int halflength=length/2;
  
  //note we only loop halfway because if we do more we will undo the 
  //reversal.  also note that odd number of elements are taken care of 
  //because lets say that we have 5 elements, 5/2 is 2, so we miss the 
  //third element but that character is in the same place in the reversed
  //string so it doesn't matter
  for(int i=0;i<halflength;i++){
    char tmp
    tmp=s[i];
    s[i]=s[length-1-i];
    s[length-1-i]=tmp;
  }
}

int main(void){
  char s[15]="hello world";
  reverseString(s);
  printf("%s\n",s);
  return 0;
}
