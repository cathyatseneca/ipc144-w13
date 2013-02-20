#include <stdio.h>
double convertCtoF(double celcius){
   double rc; //this variable holds the calculation of celius in farenheit
   
   rc = (9.0/5)*celcius+32;
   return rc;
}

/*this main is only to test the program not part of question*/
int main(void){
  double c;
  printf("enter a temp: ");
  scanf("%lf",&c);
  printf("temp is: %.2lf\n", convertCtoF(c));
}
