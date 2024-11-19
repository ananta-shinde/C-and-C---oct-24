#include<stdio.h>
struct Student{
    int rollNo;
    // char* name;
    float marks;
    
};
int main(int argc, char const *argv[])
{
    Student student_list[5];

    for(int i=0;i<5;i++){
         printf("Enter roll marks:");
       scanf( "%f",&student_list[i].marks);
        printf("Enter roll No:");
       scanf( "%d",&student_list[i].rollNo);
    }

    for(int i=0;i<5;i++){
        printf("RollNo : %d, Marks: %f\n",student_list[i].rollNo,student_list[i].marks);
    }

    return 0;
}


