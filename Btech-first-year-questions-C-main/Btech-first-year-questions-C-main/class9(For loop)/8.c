#include<stdio.h>

int main()
{
    //Q8.WAP input a no and find out sum of all digit of that no
    int a=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(;a!=0;a/=10)sum += a%10;
    printf("Sum of digits = %d",sum);
    return 0;
}