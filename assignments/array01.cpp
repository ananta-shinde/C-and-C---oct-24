// accept n numbers from user print their addition
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    // accept no of values
    printf("enter no of values:");
    scanf("%d",&n);

    // allocate memory for n integers
    int numbers[n];

    // scan values and put them into array
    for(int i=0;i<n;i++){
         printf("enter a value:");
        scanf("%d",&numbers[i]);
    }

    // calculate sum
    int sum = 0;  
    for(int i=0;i<n;i++){
        sum = sum+numbers[i];
    }
    
    // print final sum
    printf("Sum of value is %d\n",sum);

    // print avg of array
    printf("Avg of values is : %d", sum/n);
    
    return 0;
}
