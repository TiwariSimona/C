#include<stdio.h>
#include<stdlib.h>
int main(){
  float salary;
  int hour;
  printf("Enter salary per hour");
  scanf("%f",&salary);
  printf("Enter no. of hours you worked");
  scanf("%d",&hour);
  printf("Expected salary: %f\n",salary*hour);
  return 0;
}
