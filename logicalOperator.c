#include<stdio.h>
#include<stdlib.h>
int main(){
  int money;
  int grade;
  printf("Enter money and grade");
  scanf("%d%d",&money,grade);
  if(money<50&&grade>90)
    //do something
  if(money<50||grade>90)
    //do something
  if(!(grade>80))
    printf("good");
  return 0;
}
