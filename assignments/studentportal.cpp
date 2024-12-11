#include<stdio.h>
#include<string.h>
struct Student
{
    int rollNo;
    int sub1;
    int sub2;
    int sub3;
};

int main(int argc, char const *argv[])
{
    Student slist[5];

    printf("*************Welcome to student Portal**********\n");
    
    for(int i=0;i<5;i++){
        printf("Enter details student %d :\n",i+1);
        printf("enter roll number :");
        scanf("%d",&slist[i].rollNo);
        printf("enter marks of sub1 :");
        scanf("%d",&slist[i].sub1);
        printf("enter marks of sub2 :");
        scanf("%d",&slist[i].sub2);
        printf("enter marks of sub3 :");
        scanf("%d",&slist[i].sub3);
        printf("****************************\n");
    }

    printf("\n****************students details ***************\n");
    printf("Roll No     sub1    sub2    sub3    percentage      remarks\n");
    printf("-------------------------------------------\n");
    for(int i=0;i<5;i++)
    {    float per;
        char remarks[5];
         per = ((slist[i].sub1 + slist[i].sub2 + slist[i].sub3)/300.0)*100;
         if(per > 40){
            strcpy(remarks, "pass");
         }else{
           strcpy(remarks, "fail");
         }
         printf("%d      %d      %d      %d     %f      %s\n",slist[i].rollNo,slist[i].sub1,slist[i].sub2,slist[i].sub3,per,remarks);
    }
   
    return 0;
}
