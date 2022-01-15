// 2)WAP to find the factorial of a number using user-defined function
#include<stdio.h>

int fac(int);
int fac(int a)
{
    int prod=1;
    for(int i=1;i<=a;i++)prod*=i;
    return prod;
}

int main()
{  
    int a=0;
    printf("Enter a number to find factorial: ");
    scanf("%d",&a);
    printf("%d! = %d ",a,fac(a));
    return 0;
}