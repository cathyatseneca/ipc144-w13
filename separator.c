/*write a function called separate that will separate a value into 2 numbers such that
  the first number is made of alternating digits starting with first 
  and second number is alternating digits starting with second.

  24678934  --> first number is: 2683  second number is: 4794

*/ 

void separate(int original, int* first, int* second){
  int max=1000000000;  //1 billion, max is 2billion something
  int isEvenDigits=1;  //even digits in original
  int numDigits=10;
  int numDigitsinFirst=numDigits/2;

  while(original/max == 0){
    max = max /10;
    isEvenDigits = !isEvenDigits;
    numDigits--;
  }
  
}

/* 

     1234 = 1*1000 + 2*100+3*10+4
          = (((1*10)+2)*10)+3)*10+4

*/
