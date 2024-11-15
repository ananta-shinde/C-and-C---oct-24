#include<stdio.h>
int main(int argc, char const *argv[])
{
   int a = 50,b=60;
   int* ptr;
   char symbol = '$';
   char* charPtr = &symbol;
   ptr = &a;
  

   printf("%d\t",a);
   printf("%d\t",*ptr);
   printf("%d\t",&a);
   printf("%d\t",ptr);

    ptr = &b;

   printf("%d\t",a+1);
   printf("%d\t",ptr+1);
   printf("%d\t",charPtr);
   printf("%d\t",charPtr+1);
   
   
   

    return 0;
}
