#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 20;
    switch(num){
        case 1:printf("first case is exectuted\n");
        break;
        case 11:printf("second case is exectuted\n");
        break;
        case 22:printf("third case is exectuted\n");
        break;
        default:printf("invalid input\n");
    }

    
    return 0;
}
