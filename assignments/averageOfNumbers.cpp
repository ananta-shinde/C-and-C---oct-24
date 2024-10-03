// problem :  accept 5 numbers from and print their average

// solution :  sum_of_values/5
// getting data ready
//1. memory allocation(n1,n2,n3,n4,n5,result)
//2. scan 5 values

// operation
//3.result = (n1+n2+n3+n4+n5)/5

//output
//4. print result

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,n3,n4,n5;
    float result;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter a number :");
    scanf("%d",&n2);
    printf("enter a number :");
    scanf("%d",&n3);
    printf("enter a number :");
    scanf("%d",&n4);
    printf("enter a number :");
    scanf("%d",&n5);

    result = (n1+n2+n3+n4+n5)/5.0;

    printf("Average of values is : %f",result);
    return 0;
}
