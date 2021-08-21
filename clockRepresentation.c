#include <stdio.h>
#include<stdlib.h>
int main(){
int Tseconds;
int hours,minutes,Rseconds;
  printf("Enter seconds");
  scanf("%d",&Tseconds);
  hours=Tseconds/3600;
  minutes=(Tseconds-hours*3600)/60;
  Rseconds=(Tseconds-hours*3600)*60;
  printf(%d:%d:%d \n",hours,minutes,Rseconds)
