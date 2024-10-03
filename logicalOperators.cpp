#include<stdio.h>
int main(int argc, char const *argv[])
{
    //logical : ( && (And), ||(OR), !(NOT)) 
    int n1=56,n2=48;
    printf("n1>50 && n2 <46 :%d\n",n1>50 && n2 <46);
    printf("n1>50 && n2 <46 :%d\n",n1>50 && n2 >46);
    printf("n1>50 && n2 <46 :%d\n",n1>50 || n2 >46);
    printf("n1>50 && n2 <46 :%d\n",n1>50 || n2 <46);
    return 0;
}
