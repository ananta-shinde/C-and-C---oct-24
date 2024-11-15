// find a number of occurance of a number given by user in an array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[6] = {20,15,11,20,15,20};
    
    int num;
    printf("enter your number:");
    scanf("%d",&num);
    int count = 0;
    for(int i=0;i<6;i++){
      if( num == numbers[i]){
            count++;
      }
    }

    printf("Your number %d, is occured %d times",num,count);

    return 0;
}
