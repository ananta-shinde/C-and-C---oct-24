#include<stdio.h>
#include"MyMathFunctions.h"
int main(int argc, char const *argv[])
{
    double p,r, n,si;
    int choice;
    printf("********** Welcome ****************\n");
    printf("Enter Investment Amount :");
    scanf("%lf",&p);
    printf("Choose period of investment :\n");
    printf("1. 5 Years 2. 8 Years :");
    scanf("%d",&choice);
    if(choice == 1){
        si = calculateSI(p,7.5,5);
    }else{
         si = calculateSI(p,8,8);
    }

    createNewFile("bankdata.txt","w");
    
   
    return 0;
}


