// problem: print series of natural numbers upto number given by user
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 1,upperLimit;
    printf("enter your limit :");
    scanf("%d",&upperLimit);
    while(num <= upperLimit)
    {
        printf("%d\t",num);
        num++;
    }
    return 0;
}
