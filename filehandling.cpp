#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE* myFile;
    char data[100];
    myFile = fopen("mydata.txt","r");
    if(myFile == NULL){
        printf("Can not open file");
    }else{
        printf("file open in write mode successfully\n");
        fscanf(myFile,"%s",data);
        printf("Data :%s",data);
        fprintf(myFile,"%s","file open in write mode successfully");

    }
    return 0;
}
