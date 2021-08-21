#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
 int num;
  printf("Enter positive/negative number");
  scanf("%d",&num);
  if(num<0)
    printf("Absolute number of %d is %d \n",num,(-1)num);
  else
    printf("Absolute number of %d is %d \n",num,num);
  return 0;
}
