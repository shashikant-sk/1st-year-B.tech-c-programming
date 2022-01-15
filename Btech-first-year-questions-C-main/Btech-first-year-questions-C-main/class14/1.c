// 1)WAP to add 2 numbers using user-defined function
#include<stdio.h>

int add(int,int);
int add(int a,int b)
{
    return a+b;
}

int main()
{  
    int a=0,b=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum = %d ",add(a,b));
    return 0;
}