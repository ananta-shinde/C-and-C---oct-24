#include<stdio.h>
#include"mystructures.h"
void insertProduct(Product* list,int* count)
{
    int index = *count;
    printf("Enter product Id :");
    scanf("%d",&list[index].pid);
    printf("Enter product price :");
    scanf("%f",&list[index].price);
    printf("Enter product name :");
    scanf("%s",list[index].name);
    *count = *count+1;

}

void printProductDetails(Product* product_list,int count)
{
    for(int i=0;i<count;i++){
         printf("Pid : %d,Name : %s,Price : %f\n",product_list[i].pid,product_list[i].name,product_list[i].price);
    }
}