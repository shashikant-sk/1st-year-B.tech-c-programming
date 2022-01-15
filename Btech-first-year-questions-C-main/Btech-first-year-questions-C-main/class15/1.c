//Write a program in C to print first 50 natural numbers using recursion.
#include<stdio.h>

void printer(int);

void printer(int n)
{
    printf("%d ",n);
    if(n==1)return 1;
    printer(n-1);
}

int main()
{
    printer(50);
    return 0;
}