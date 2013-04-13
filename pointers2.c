#include <stdio.h>

void f1(int* a,int* b){
  int temp=*a;
  *a=*b;
  *b=temp;
}


void f2(int a,int b){
  int temp=a;
  a=b;
  b=temp;
  printf("in f2: a=%d,b=%d\n",a,b);  
}
void f3(int* a,int* b){
  int* temp=a;
  a=b;
  b=temp;
  printf("in f3: a=%d,b=%d\n",*a,*b);  
}
int main(void){
  int a=10;
  int b=20;
  printf("a=%d,b=%d\n",a,b);
  f3(&a,&b);
  printf("a=%d,b=%d\n",a,b);
}
