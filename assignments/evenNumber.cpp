// problem : accept a number from user and print if its even or odd
//solution
//1.Memoryallocation(num)
//2.check (num%2 == 0)
//  if even then print even
//  else odd 

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("number is even");
    }else{
        printf("Number is Odd");
    }
    return 0;
}
