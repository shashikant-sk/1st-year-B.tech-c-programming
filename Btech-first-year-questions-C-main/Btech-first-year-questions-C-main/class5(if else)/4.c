#include<stdio.h>
int main()
{
    //Q4.WAP to test whether a number entered through keyboard is ODD or EVEN.
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a%2==0)printf("EVEN");
    else printf("ODD");
    return 0;
}