#include <stdio.h>

int main(void){
  char filename[50];
  FILE* handle;      //the variable handle will eventually 
                     //be associated with a file

  char name[50];     //storing someone's name

  printf("please enter the name of the file you want to print to: ");
  scanf("%s",filename);
  
  printf("Please enter your name");
  scanf("%s",name);

  //open a file for writing
  //the filename is the name entered by the user (a string)
  //the "w" means we are opening the file for writing
  handle = fopen(filename,"w");

  //if handle is not NULL (not 0) file was successfully opened
  if(handle){
    fprintf(handle,"hello world\n");
    fprintf(handle,"%s\n",name);
  }
  fclose(handle);
}
