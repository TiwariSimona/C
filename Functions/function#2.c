//Some parameter
// Nothing returned
//max betwwen 2 integers

#include <stdio.h>
#include<stdlib.h>
void print Minmax(int num1,int num2)
{
  if(num1>num2){
    printf("Max is %d",num1);
    printf("Min is %d",num2);
  }else{
    printf("Max is %d",num2);
    printf("Min is %d",num1);
  }
  
  int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    print MinMax(a,b);
    return 0;
  }
