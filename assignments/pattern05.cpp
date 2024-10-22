// *
// **
// ***
// ****
// ***
// **
// *

#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j<=i){
                printf("*");
            }
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j<(3-i)){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
