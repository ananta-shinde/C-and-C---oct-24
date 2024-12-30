#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Product
{
    int product_id;
    char product_name[25];
    float product_price;
};

void printProduct(Product p){
     printf("Id: %d,Name: %s, Price: %f\n",p.product_id,p.product_name,p.product_price);
}

Product* createProduct(Product* list,int* count){
    
    if(*count>1){

        list = (Product*)realloc(list,sizeof(Product)*(*count+1));
    }
    
    int index = *count;
    printf("\n*********** Enter details for new product ************\n");
    printf("Enter Product Id :");
    scanf("%d",&list[index].product_id);
    printf("Enter Product price :");
    scanf("%f",&list[index].product_price);
    printf("Enter Product Name :");
    scanf("%s",list[index].product_name);
    *count = *count +1; 

    return list;  
}

void printProductList(Product* list,int count){
    printf("\n********** product list ****************\n");
    for(int i=0;i<count;i++){
        printProduct(list[i]);
    }
}

Product searchProductByID(Product* list,int count,int id)
{
    for(int i=0;i<count;i++){
        if(list[i].product_id == id){
            return list[i];
        }
    }
}

Product searchProductByName(Product* list,int count,char* name)
{
    for(int i=0;i<count;i++){
        if(strcmp(list[i].product_name,name) == 0){
            return list[i];
        }
    }
}

void filterproductByPrice(Product* list,Product* result,int count,float start,float end)
{
    int idx = 0;
    for(int i=0;i<count;i++){
        if(list[i].product_price > start && list[i].product_price < end){
            result[idx] = list[i];
            idx++;
        }
    }
}



int main(int argc, char const *argv[])
{
    Product* product_list = (Product*)calloc(1,sizeof(Product));
    int count = 0;
    product_list = createProduct(product_list,&count);
    product_list = createProduct(product_list,&count);
    product_list = createProduct(product_list,&count);
    printProductList(product_list,count);

    // int pid;
    // printf("\nEnter product Id to search :");
    // scanf("%d",&pid);
    // Product p = searchProductByID(product_list,count,pid);
    // printProduct(p);
    
    char name[25];
    printf("\nEnter product Id to search :");
    scanf("%s",name);
    Product p = searchProductByName(product_list,count,name);
    printProduct(p);

    Product result[count];
    filterproductByPrice(product_list,result,count,100,500);
    printProductList(result,count);

    return 0;
}
