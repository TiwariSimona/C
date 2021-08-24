#include <stdio.h>
#include<stdlib.h>
int main(){
  int year;
  printf("Enter year");
  scanf("%d",&year);
  if(year%400==0)
    printf("Leap Year);
  else if(year%100==0)
     printf("Not  leap year");
  else if(year%4==0)
     printf("Leap Year");
  else
     printf("Not a leap year");
 return 0;
           }
         
