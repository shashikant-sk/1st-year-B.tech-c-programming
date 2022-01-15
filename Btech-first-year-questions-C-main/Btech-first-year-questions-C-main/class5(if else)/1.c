#include<stdio.h>
int main()
{
    //Q1.WAP to find the largest between two numbers. 
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)printf("%d",a);
    else if(b>a) printf("%d",b);
    else printf("Both are equal.");
    return 0;
}