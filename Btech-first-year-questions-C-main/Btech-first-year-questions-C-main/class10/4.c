#include<stdio.h>

int main()
{
    //Q4.Write a C program to calculate the factorial of a given number
    int n,fact=1;
    printf("Enter number to find factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)fact*=i;
    printf("Factorial of %d = %d",n,fact);
    return 0;
}