#include <stdio.h>
#include <stdlib.h>

int main(void){
  FILE* fp;
  //open the file
  fp=fopen("marks.txt","r");

  //process the file
  if(fp==0){
    printf("could not open marks.txt\n");
    exit(0);
  }  
  else{
    char name[60];
    char studentNumber[10];
    int grade;
    int returnFromScanf;
    // name ; stnumber ; number
    //for each line of the file
    //%[^;] string upto but not including the semi-colon
    returnFromScanf=fscanf(fp,"%[^;];%[^;];%d\n",name,studentNumber,&grade);
    while(returnFromScanf==3){
      printf("%s - %s - %d\n",name,studentNumber,grade);   
      returnFromScanf=fscanf(fp,"%[^;];%[^;];%d\n",name,studentNumber,&grade);
    }
  }
  //close the file
}
