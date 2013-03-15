#include <stdio.h>
#include <string.h>   //library with nullterminated strings
void sortStrings(char arr[][30],int sz);

int main(void){
   char string1[20]="hello world !!";
   char string2[30]="second";
   char string3[20]={'a','b','c','d','e','f','g'};

   //this is a 10 element array.  Each element is a string
   //of 30 characters

   printf("The string %s has %d characters\n",string1,strlen(string1));

   strcpy(string3,string1);  //copys string1 into string3
   printf("string3: %s\n",string3);

   strcat(string2," ");   
   strcat(string2,string1);   

   printf("%s\n",string2);  //I want to print:
                            //second hello world!!

   char arrayOfStrings[10][30]={
    "dog","cat","mice","cow","duck","chicken","turkey","rat","snake","lobster"
   };

   printf("strcmp(\"cat\",\"dog\") == %d\n",strcmp("cat","dog"));
   printf("strcmp(\"dog\",\"cat\") == %d\n",strcmp("dog","cat"));
   printf("strcmp(\"cat\",\"cat\") == %d\n",strcmp("cat","cat"));
   printf("strcmp(\"cat\",\"cow\") == %d\n",strcmp("cat","cow"));
  
  sortStrings(arrayOfStrings,10);
  int i;
  for(i=0;i<10;i++){
     printf("%s\n",arrayOfStrings[i]);
  }
}
void sortStrings(char arr[][30],int sz){
  int i,j;
  char tmp[30];
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
