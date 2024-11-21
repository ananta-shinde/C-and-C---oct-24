#include<stdio.h>
#include<string.h>
struct Address{
    char address_line1[20];
    char city[20];
    char state[20];
    char country[20] = "India";
};
struct College{
    int college_id;
    char name[40];
    char contact[10];
    Address address;
};

struct Student{
    int stud_id;
    char name[40];
    Address address;
    College* college;
};


int main(int argc, char const *argv[])
{
    College c1;
    c1.college_id = 100;
    strcpy(c1.name,"MIT");
    strcpy(c1.contact,"4664646464");
    strcpy(c1.address.address_line1,"MIT college,satara parisar");
    strcpy(c1.address.city,"Chh Sambhaji Nagar");
    strcpy(c1.address.state,"Maharashtra");

    Student s1;
    s1.stud_id = 200;
    strcpy(s1.name,"Ananta");
    strcpy(s1.address.address_line1,"satara parisar");
    strcpy(s1.address.city,"Chh Sambhaji Nagar");
    strcpy(s1.address.state,"Maharashtra");
    s1.college = &c1;

    printf("Name: %s,City: %s,college :%s",s1.name,s1.address.city,s1.college->name);
    
    return 0;
}
