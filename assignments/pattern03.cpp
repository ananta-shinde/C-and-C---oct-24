// ****
// ***
// **
// *

#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j<(4-i)){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
