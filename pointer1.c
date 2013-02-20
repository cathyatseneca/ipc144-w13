/*Write a function that will take a floating point value and separate it into two 
ints 
representing the value before the decimal and the value after the decimal(to 2 
decimal places) and give those back to the calling function*/

/*we cannot use return because we need to give back more than one value
  as a result.   Instead we need to use pointers.  The calling function
  must supply 2 variables that we will then put the result in.  The addresses
  for those variables are stored in b and a*/
void separate(double value,int* b, int* a){
  int before;
  int after;
  before = value;
  after = (value - before)*100;
  *b = before;
  *a = after;
}
int main(void){
  double testvalue = 123.456;
  int first, second;
  separate(testvalue, &first, &second);
  printf("first is %d\n",first);
  printf("second is %d\n",second);

} 

/*alternate solution*/
void separate(double value,int* before, int* after){
  *before = value;
  *after = (value - before)*100;
}

