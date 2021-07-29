#include<stdio.h>
#include<stdlib.h>
int mainO(){
  float a1,d;
  int n;
  printf("Enter the iniial term (a1): ");
  scanf("%f",&a1);
  printf("Enter difference : ");
  scanf("%f",&d);
  printf("Enter no. of elements");
  scanf("%d",n);
  printf("The nth term=%f\n",a1+(n-1)*d);
  return 0;
}
