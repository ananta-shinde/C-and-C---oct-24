#include<stdio.h>
int main() {
  
  int num,rev = 0;
  printf("enter a number:");
  scanf("%d",&num);
  
  while(num!=0){
    int r = num%10;
    rev = rev*10+r;
    num = num/10;
  }

  printf("reverse of number  is : %d",rev);
  return 0;
}