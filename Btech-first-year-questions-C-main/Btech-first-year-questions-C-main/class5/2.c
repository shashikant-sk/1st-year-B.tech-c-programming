#include<stdio.h>
int main()
{
    //Q2.WAP to input a no .check whether no is +ve or -ve? 
    int a;
    printf("Enter numbers: ");
    scanf("%d",&a);
    printf("%s",(a>=0?"positive":"negative"));
    return 0;
}