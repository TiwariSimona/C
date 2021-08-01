#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int num,
  printf("Enter a Number");
  sacnf("%d",&num);
  if(num>=10&&num<=99)
    printf("Double Digit Number");
  else if(num>=100&&num<==99)
    printf("Triple Digit Number");
  else
    printf("Neither double nor triple digit number");
  return 0;
}
