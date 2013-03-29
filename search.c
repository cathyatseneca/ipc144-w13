/*function returns index of where key is located in arr.
  if key is not in the array, function returns -1*/
int linearSearch(int key, int arr[],int sz){
  int rc=-1;  //assume it is not in the array to start with
  int i;
  for(i=0;i<sz && rc == -1;i++){
    if(arr[i]==key){
      rc=i;
    }
  }
  return rc;
}

/*function returns index of where key is located in arr.
  if key is not in the array, function returns -1. 
  NOTE: arr must be sorted in order for this function to
  work*/
int binarySearch(int key, int arr[],int sz){
  int rc=-1
  int lowIdx=0;   //lowest index of where item may be
  int highIdx=sz-1;   //highest index of where item may be
  int midIdx;     //index of middle of array we are interested in
                  //mid point between high and low;
  while(rc==-1 && lowIdx <=highIdx){
    midIdx=(lowIdx+highIdx)/2;
    if(arr[midIdx]==key){
      rc=midIdx;
    }
    else if(key < arr[midIdx]){
      highIdx=midIdx-1;
    }
    else{
      lowIdx=midIdx+1;
    }
  }
  return rc;
}
