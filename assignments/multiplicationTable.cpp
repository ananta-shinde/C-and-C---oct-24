#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
   
    for(int i=1;i<=10;i++){
         int result = num*i;
        printf("%d * %d = %d\n",num,i,result);
    }
    
    return 0;
}
