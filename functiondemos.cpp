#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,result,choice;
    printf("enter two numbers :");
    scanf("%d%d",&n1,&n2);
   do{
    printf("Choose between following oprations :\n");
    printf("1.Addition 2.Multiplication");
    scanf("%d",&choice);
   if(choice == 1){ 
    result = n1+n2;
    printf("Addition is :%d",result);
    break;
   }else if(choice == 2){
    result = n1*n2;
    printf("Multiplication is :%d",result);
    break;
   }else{
      printf("invalid choice, please re-enter choice:");
   }

   } while(choice != 1 || choice !=2);
    
    return 0;
}
