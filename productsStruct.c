#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*a struct is a declaration for a set of data that is related
  but not of the same type.  In this case I am specifying
  that all ProductData has a description string, a price
  and an integer product number.  By making a struct
  I am essentially creating my own data type*/
struct ProductData{
  char desc_[60];   //data member of ProductData
  double price_;
  int prodNum_;
};

void sortProducts(struct ProductData catalog[], int sz);

int main(void){
  FILE* fp;
  //open the file
  fp=fopen("products.txt","r");
  int i=0;
  int numProducts=0;

  
  //process the file
  if(fp==0){
    printf("could not open products.txt\n");
    exit(0);
  }  
  else{
    //1000 element array named catalog.  each element is a ProductData
    struct ProductData catalog[1000];

    while(fscanf(fp,"%d;%[^;];%lf\n",&catalog[i].prodNum_,catalog[i].desc_,&catalog[i].price_)==3){
      i++;
    }
    numProducts=i;
    for(i=0;i<numProducts;i++){
      printf("product number: %d, description: %s, price: $%.2lf\n",catalog[i].prodNum_,catalog[i].desc_,catalog[i].price_);
    }
    
    sortProducts(catalog,numProducts);
    printf("\nProducts in sorted order\n");
    for(i=0;i<numProducts;i++){
      printf("product number: %d, description: %s, price: $%.2lf\n",catalog[i].prodNum_,catalog[i].desc_,catalog[i].price_);
    }

  }
  //close the file
}

//sorts the list of products (and their associated product numbers and descriptions)
void sortProducts(struct ProductData catalog[], int sz){
  int i,j;
  struct ProductData tmp;
  for(i=0;i<sz;i++){
    for(j=0;j<sz-1;j++){
      if(strcmp(catalog[j].desc_,catalog[j+1].desc_) > 0){
         tmp=catalog[j];
         catalog[j]=catalog[j+1];
         catalog[j+1]=tmp;
      }
    }
  }
}
