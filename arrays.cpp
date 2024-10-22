#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("enter no of values :");
    scanf("%d",&size);
    // array declaration
    // datatype  identifier[capacity];
    int numbers[size];

    // int marks[] = {20,50,56,23}; // initialization
    // int marks2[10] = {20,50,56,23}; // partial initialization

    // printf("%d\t",marks[0]);
    // printf("%d\t",marks[1]);
    // printf("%d\t",marks[2]);
    // printf("%d\t",marks[3]);


    // updating array elements
    for(int i=0;i<size;i++){
         printf("Enter a number:");
        scanf("%d",&numbers[i]);
    }
   

    // print an array elements
    for(int i=0;i<size;i++){
         printf("%d\t",numbers[i]);
    }


    return 0;
}
