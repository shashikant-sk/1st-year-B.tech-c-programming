// 3)WAP to find the sum of digits of a number n using user-defined function
#include<stdio.h>

int sumDigit(int);
int sumDigit(int a)
{
    int sum=0;
    while(a>0)
    {
        sum += a%10;
        a /= 10;
    }
    return sum;
}

int main()
{  
    int a=0;
    printf("Enter a number to find sum of digits: ");
    scanf("%d",&a);
    printf("Sum of digits = %d ",sumDigit(a));
    return 0;
}