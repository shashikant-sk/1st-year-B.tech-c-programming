//Q2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include<stdio.h>

int sum(int);

int sum(int n)
{
    if(n==1)return 1;
    return n+sum(n-1);
}

int main()
{
    int n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}