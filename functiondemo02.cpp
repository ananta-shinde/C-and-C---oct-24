#include<stdio.h>
struct Product
{
    int pid;
    float price;
    char name[100];
};

// syntax :  return_type identifier(agrs){}

void insertProduct(Product* list)
{
    printf("Enter product Id :");
    scanf("%d",&list[0].pid);
    printf("Enter product price :");
    scanf("%d",&list[0].price);
    printf("Enter product name :");
    scanf("%s",list[0].name);
}

int main(int argc, char const *argv[])
{
    Product product_list[5];

    // search
    // insert
    insertProduct(product_list);
    insertProduct(product_list);
    insertProduct(product_list);
   
    // delete
    // print
    return 0;
}


