// write a program to search a value in an array

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[] = {25,45,56,25,58,56};
    int searchValue;
    printf("enter value to be searched :");
    scanf("%d",&searchValue);
    bool flag = false;
    for(int i=0;i<6;i++){
        if( numbers[i] == searchValue){
            flag = true;
            break;
        }
    }
    if(flag == true){
         printf("%d is present in array",searchValue);
    }else{
        printf("%d is not present in array",searchValue);
    }
   
   
    return 0;
}

