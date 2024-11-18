// accpet collection of numbers from user and print largest number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("enter no of values:");
    scanf("%d",&size);
    int numbers[size];

    for(int i=0;i<size;i++){
        printf("enter a number:");
        scanf("%d",&numbers[i]);
    }

    // logic for finding largest
    int largest = numbers[0];

    for(int i=0;i<size;i++){
        if(numbers[i] > largest){
            largest = numbers[i] ;
        }
    }
    printf("\n largest number is : %d",largest);

    return 0;
}
