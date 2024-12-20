#include<stdlib.h>
int findLargest(int * arr,int count){
   int largest = arr[0];
   for(int i=0;i<count;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
   }
   return largest;
}

double calculateSI(double p,double r,double n){

    double si;
    si = (p*r*n)/100;
    return si;

}

bool isEven(int n){
    if(n%2 == 0){
        return true;
    }else{
        return false;
    }
}


FILE* createNewFile(char* path,char* mode){
    FILE * myfile = fopen(path,mode);
    return myfile;
}



