#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    //int numbers[5];
    int* numbers;
    // numbers = (int*)malloc(20);
    numbers = (int*)calloc(5,sizeof(int));

    for(int i=0;i<3;i++){
        printf("enter a number:");
        scanf("%d",&numbers[i]);
    }

    numbers = (int*)realloc(numbers,40);
    // free(numbers);
     
    for(int i=0;i<10;i++){
        
        printf("%d\t",numbers[i]);
    }

   




    
    

    return 0;
}
