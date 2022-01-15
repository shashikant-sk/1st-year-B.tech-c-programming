#include<stdio.h>

int main()
{
    //Q1.WAP to input principal,time,rate of interest and find out simple interest.
    float p,t,r;
    printf("Enter principal,rate,time period: ");
    scanf("%f %f %f",&p,&t,&r);
    printf("Simple Interest = %f",(p*t*r)/100);
    return 0;
}