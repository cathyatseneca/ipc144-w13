void finalGrades(double project[], double test[], double final[], int numst){
  int i;
  for(i=0;i<numst;i++){
    final[i]=project[i]*0.6+test[i]*0.4;
  }
}

void calculateStats(double final[], int* numOver80, int* numUnder55, int numst){
  int i;
  *numUnder55=0;
  *numOver80=0;
  double total=0;
  for(i=0;i<numst;i++){
    total+=final[i];
    if(final[i] < 55){
      *numUnder55=*numUnder55+1;
    }
    if(final[i] > 80){
      *numUnder80=*numUnder80+1;
    }
  }
  return total;
}
