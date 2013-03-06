void order(int a, int b, int c,int* small,int* middle,int* big){
  //if a is smallest
  if(a < b && a < c){
    *small = a;
    if(b < c){
      *middle = b;
      *big =c;
    }
    else{
      *middle=c;
      *big = b;
    }
  }

  //if b is smallest
  else if(b < a && b < c){
    *small = b;
    if(a < c){
      *middle = a;
      *big =c;
    }
    else{
      *middle=c;
      *big = a;
    }
  }
  //else c must be smallest

  else{
    *small = c;
    if(a < b){
      *middle = a;
      *big =b;
    }
    else{
      *middle=b;
      *big = a;
    }
  }
}

void order(int a, int b, int c,int* small,int* middle,int* big){
  int sm, mid , bg;

  if( a < b && a < c){
     sm=a;
  }
  else if(b < a && b <c){
    sm=b;
  }
  else{
    sm=c;
  }

  if( a > b && a > c){
     bg=a;
  }
  else if(b >a && b <c){
    bg=b;
  }
  else{
    bg=c;
  }

  if( (a > b && a > c) || (a > c && a < b)){
     mid=a;
  }
  else if( (b > a  && b > c) || (b > c && b < a)){
    mid=b;
  }
  else{
    mid=c;
  }
  *small=sm;
  *middle = mid;
  *big = bg;
}

