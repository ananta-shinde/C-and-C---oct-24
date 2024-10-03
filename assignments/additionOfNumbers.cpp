//problem : accept two numbers from user and print their addition

//solution :
//getting data ready
// 1.memory allcation(n1,n2,result)
//2. scan values

// operation
//3.add two values(+ operator) save result

// output
//4. print result


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,result;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter a number:");
    scanf("%d",&n2);
    result = n1+n2;
    printf("addtion is : %d",result);
    return 0;
}
