#include<stdio.h>
#include<stdlib.h>
int main(){
  int num1,num2;
  printf("Enter two numbers");
  scanf("%d",&num1);
  scanf("%d",&num2);
  if(num1>num2)
    printf("max=%d",num1)
  else
    printf("max=%d",num2)
 return 0;
}
