// accept n values from user, print odd values and even values
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

     printf("\nEven values are :\n");
    for(int i=0;i<n;i++){
        if(numbers[i]%2 == 0){
             printf("%d\t",numbers[i]);
        }
    }
    
    printf("\nOdd values are :\n");
    for(int i=0;i<n;i++){
        if(numbers[i]%2 != 0){
             printf("%d\t",numbers[i]);
        }
    }
    return 0;
}
