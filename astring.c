#include <stdio.h>
#include <string.h>








int f1(char s[]){
  int i;
  int total=0;  
  for(i=0;i<strlen(s);i++){
    total+=s[i];
  }
  return total;
}
int f2(char s[]){
  int i;
  int total=0;  
  int len=strlen(s);
  for(i=0;i<len;i++){
    total+=s[i];
  }   
  return total;
}
int f3(char s[]){
  int i;
  int total=0;  
  for(i=0;s[i]!='\0';i++){
    total+=s[i];
  }   
  return total;
}


int main(void){  

  char s[200000];
  int i;
  for(i=0;i<200000;i++){
    s[i]='A';
  }
  printf("sum of 'a's = %d \n",f2(s));

/*strcmp example
  char s1[10]="cat";
  char s2[10]="chamster";

  printf("strcmp(\"cat\",\"chamster\"); = %d\n", strcmp(s1,s2));
  printf("strcmp(\"chamster\",\"chamster\"); = %d\n", strcmp(s2,s2));
  printf("strcmp(\"chamster\",\"cat\"); = %d\n", strcmp(s2,s1));
*/
}
