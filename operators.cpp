#include<stdio.h>
int main(int argc, char const *argv[])
{
    // arithmatic operators ( +,- ,*,/,%,++,--)
    int n1=50,n2=5,result;
    
    result = n1+n2;
    printf("Addition is : %d\n",result);
    result = n1-n2;
    printf("Sub is : %d\n",result);
    result = n1*n2;
    printf("MUl is : %d\n",result);
    result = n1/n2;
    printf("Division is : %d\n",result);
    result = n1%n2;
    printf("Remainder is : %d\n",result);
    n1++;
    printf("updated value of n1 : %d\n",n1);
    n1--;
    printf("updated value of n1 : %d",n1);
    return 0;
}
