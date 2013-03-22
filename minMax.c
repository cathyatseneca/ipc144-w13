void minMax(int arr[],int sz,int* min, int* max){
  int i;
  *min=arr[0];  //prime loop... must make sure *min and *max
  *max=arr[0];  //has something to compare against

  for(i=0;i<sz;i++){
    if(arr[i] < *min){
      *min=arr[i];
    }
    if(arr[i] > *max){
      *max=arr[i];
    } 
  }
}
