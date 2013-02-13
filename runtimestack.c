#include <stdio.h>
int doThis(int v){
  int rc=1;
  if(v > 0){
    rc =v* doThis(v-1);
  }
  return rc;
}
int main(void){
  int x = 3;
  int y = doThis(x);
  printf("%d\n",y);
}
