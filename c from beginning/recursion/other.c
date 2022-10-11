// Write a function to find sum of digits of a number using recursion.

#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d = %d", n, sum(n));
    return 0;
}
int sum(int n)
{
    if(n == 0)
        return 0;   
    return (n % 10 + sum(n / 10));
}
