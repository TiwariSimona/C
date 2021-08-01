 #include<stdio.h>
#include<stdlib.h>
int main(){
  char grade;
  printf("Enter your grade);
  scanf("%c",&grade);
         switch(grade){
           case'A':
           printf("Grade between 90-100");
           break;
           case'B':
           printf("Grade between 80-90");
           break;
           case 'C':
           printf("Grade between 70-80");
           break;
           case'D':
           printf("Grade between 60-70");
           break;
           default:
           printf("Fail-below 50");
           break;
         }
         return 0;
       }
           
