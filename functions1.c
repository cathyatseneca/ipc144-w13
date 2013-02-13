#include <stdio.h>

/*Write a function that converts a measurment given in inches of feet.
  The function returns the centimeter equivalent of that measurement
 
   12 inch == 1 foot
   1 inch == 2.54 cm
  This function accepts an integer argument representing feet and a floating
  point value representing inches in that order
  This function returns a float representing the measurement in centimeters
*/
/*returntype  functionname(parametertype1 parametername1, ...)*/
float convert(int feet,float inches){
   //code for function goes here
  float result;    //this variable will hold the measurement in cm
    
  //do math here
  result = (feet*12)*2.54 + inches*2.54;
  //result = ((feet*12)+inches)*2.54;

  return result;
}

/*write a program that asks a user to enter 2 value measurement in 
  inches and feet and display the measurement in centimeters*/

int main(void){
  int ft;
  float in;
  float m;
  printf("please enter the measurement in feet: ");
  scanf("%d",&ft);
  printf("Please enter the measurement in inches: ");
  scanf("%f",&in);
  m = convert(ft,in);
  printf("The measurement is %.2f cm",m);
}
