#include<stdio.h>
#include<stdlib.h>
int main(){
  int grade;
  printf("Enter grade");
  scanf("%d",&grade);
  if(grade>=80)
    printf("Good");
  else if(grade>=60)
    printf("Not Bad");
  else
    printf("Try Again");
  return 0;
}

