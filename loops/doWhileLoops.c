#include <stdio.h>
#include<stdlib.h>
int main(){
  int price,totalprice=0;
  do{
    printf("Enter price");
    scanf("%d",&price);
    totalprice=totalprice+price;
  }while(price!=0);
  printf("totalprice=%d",totalprice);
  return 0;
}
