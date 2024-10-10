#include<stdio.h>
int main(int argc, char const *argv[])
{
    char choice ;
    printf("enter your choice:");
    scanf("%c",&choice);

   if((int(choice) >= 48 && int(choice) <=57)  ){
        printf("Enter value is a number");
   }
   else{
     printf("Enter value is Alphabet");
   }
    
    return 0;
}
