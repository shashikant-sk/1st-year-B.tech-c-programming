//Q4. Write a program in C to find the sum of digits of a number using recursion
#include<stdio.h>

int sod(int);

int sod(int n)
{
    if (n == 0)return 0;
    return (n % 10) + sod(n / 10);
}

int main()
{
    int n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("sum of digits = %d",sod(n));
    return 0;
}