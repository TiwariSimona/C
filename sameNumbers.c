#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int num1,num2;
  printf("Enter First Number");
  scanf("%d",&num1);
  printf("Enter second Number");
  scanf("%d",&num2);
  if(num1==num2)
    printf("True");
  else
    printf("False");
  return 0;
}
