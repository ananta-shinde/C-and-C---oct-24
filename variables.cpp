// variables are nothing but, memory allocation

#include<stdio.h>
int main()
{
   //syntax : datatype idetifier = value;
   int noStudent = 20;// initialization
   float tempOfDay = 22.25;
   int num; //declaration
   num = 40;
   char division = 'A';

   // printing value of variable
   printf("%d\n",noStudent);
   // printing size of variable
   printf("%d\n",sizeof(noStudent));
   //printing address of varibale
   printf("%d\n",&noStudent);

   division = 20;
   noStudent = 1000;
   noStudent = 20.56;
   
   num = 40;
   printf("enter value of num :");
   scanf("%d",&num);
   printf("%c\n",division);
    return 0;
}
