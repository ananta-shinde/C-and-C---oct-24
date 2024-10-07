#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("ONE");
        break;
    case 2:
        printf("TWO");
        break;
    
    case 3:
        printf("THREE");
        break;
    
    default:
        printf("invalid input");
        break;
    }
    return 0;
}
