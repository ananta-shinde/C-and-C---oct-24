#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[] = {20,55,56,12,23,45,88};
    // sorting
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            if(numbers[j]>numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;

            }
        }
    }
    for(int i=0;i<7;i++){
        printf("%d\t",numbers[i]);
    }
    return 0;
}
