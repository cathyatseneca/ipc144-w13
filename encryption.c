#include <stdio.h>
#include <ctype.h>
//this function takes a character, and returns its
//ecrypted character
char encrypt(char ch);

//this function takes a character, and returns its
//decrypted character
char decrypt(char ch);

int main(void){
  char inputFileName[50];
  char outputFileName[50];
  char option;
  FILE* inputFile;
  FILE* outputFile;
  char ch;

  printf("input file name: ");
  scanf("%s",inputFileName);
  
  printf("output file name: ");
  scanf("%s",outputFileName);

  printf("enter if you want to encrypt or decrypt (e or d): ");
  scanf(" %c",&option);
  
  inputFile=fopen(inputFileName,"r");
  outputFile=fopen(outputFileName,"w");

  if(inputFile){
    fscanf(inputFile,"%c",&ch);    
    while(!feof(inputFile)){   //feof returns true if end of file marker 
                               //is encountered
      if(tolower(option) == 'e'){
        ch=encrypt(ch);
        fprintf(outputFile,"%c",ch);
      }
      else if(tolower(option)=='d'){
        ch=decrypt(ch);
        fprintf(outputFile,"%c",ch);
      }
      fscanf(inputFile,"%c",&ch);    
    }
  }
  else{
    printf("could not open file: %s\n",inputFileName);
  }
    
}
char encrypt(char ch){
  char rc=ch;
  if(isalpha(ch)){
    switch(ch){
      case 'y': rc='a'; 
           break;
      case 'Y': rc='A'; 
           break;
      case 'z': rc='b'; 
           break;
      case 'Z': rc='B'; 
           break;
      default:
           rc=ch+2;
    }
  }
  return rc;
}
char decrypt(char ch){
  char rc=ch;
  char upper;
  if(isalpha(ch)){
    upper=toupper(ch);
    upper=upper-'A';     //a number between 0 and 25;
    upper=((upper + 26) - 2)%26;  //0 to 25
    if(islower(ch)){
      rc='a'+upper;
    }
    else
      rc='A'+upper;
  }
  return rc;
}

