// problem :  wap to calculate interest(simple interest) and print Amount

// solution
// 1.memory allocation(p,r,n,si,total)
// 2. scan data from user
//3. calculate interest ( prn/100) save si
//4. calculate total ( p+si)
//5. print total

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float p,r,n,si,total;
    printf("Enter principle amount :");
    scanf("%f",&p);
    printf("Enter rate of interest(%) :");
    scanf("%f",&r);
    printf("Enter period of investment(years) :");
    scanf("%f",&n);

    si = (p*r*n)/100;
    total = p + si;
    printf("Your interest : %f, total :%f",si,total);
    return 0;
}
