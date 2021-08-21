#include <stdio.h>
#include<stdlib.h>
int manin(){
  int num;
  int i;
  printf("Enter a number");
  scanf("%d",&num);
  for(i=1;i<num;i++){
    printf("%d",i);
  }
  return 0;
}
