#include<stdio.h>
#include<stdlib.h>
int main(){
  int num1,num2;
  char operation;
  printf("Enter operation,+,-,*,/: \n");
  scanf("%c",&char);
  printf("Enter two numbers");
  scanf("%d%d",&num1,num2);
  switch(opeartion){
      case'+':
      printf("%d%c%d=%d\n",num1,operation,num2,num1+num2);
      break;
      case'-':
      printf("%d%c%d=%d\n",num1,operation,num2,num1-num2);
      break;
      case'*':
      printf("%d%c%d=%d\n",num1,operation,num2,num1*num2);
      break;
      case'/':
      if(num2==0)
        printf("Division by 0 is not possible");
      else
        printf("%d%c%d=%d\n",num1,operation,num2,num1/num2);
      break;
    default:
      printf("Wrong operation");
      break;
  }
  return0;
}
