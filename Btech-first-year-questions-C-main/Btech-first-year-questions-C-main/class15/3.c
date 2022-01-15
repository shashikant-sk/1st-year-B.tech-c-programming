//Q3. Write a program in C to count the digits of a given number using recursion
#include<stdio.h>

int count(int);

int count(int n)
{
    if(n/10==0)return 1;
    return 1+count(n/10);
}

int main()
{
    int n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("number of digits = %d",count(n));
    return 0;
}