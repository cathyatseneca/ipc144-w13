#include <stdio.h>
#include <string.h>

/*Given a floating point value, create a string that formats the floating 
point as 123,456,789.12   12,345.67 */

void makeDoubleString(double value,char result[]){
  int dec;         //value to right of decimal.
  int front[100];  //front[0] will store digits in the ones to hundred range
                   //front[1] int the thousand to 100 thousand range
                   //front[2] in the million to 100million range

  int leftOfDec=value;
  char frontStrings[100][4];

  dec=(value-leftOfDec)*100;
  char decString[3];
  sprintf(decString,"%d",dec); 
  int i=0;
  int j;
  while(leftOfDec!=0){
    front[i]=leftOfDec%1000;
    sprintf(frontStrings[i],"%d",front[i]);
    leftOfDec=leftOfDec/1000;
    i++;
  }
  
  result[0]='\0';
  for(j=i-1;j>=0;j--){
     strcat(result,frontStrings[j]);
     if(j!=0){
       strcat(result,",");
     }
     else{
       strcat(result,".");
     }
     //alternatively:  strcat(result,((j==0)?".":","));
  }  
  strcat(result,decString);
}

int main(void){
  char s[500];
  makeDoubleString(12345.67,s);
  printf("%s\n",s);
}
