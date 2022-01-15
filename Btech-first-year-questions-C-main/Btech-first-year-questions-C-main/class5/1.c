#include<stdio.h>
int main()
{
    //Q1.WAP to find the largest between two numbers. 
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d",(a>b?a:b));
    return 0;
}