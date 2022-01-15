// 4)WAP to find if a number is prime or not using user-defined function
#include<stdio.h>
#include<math.h>

int isPrime(int);
int isPrime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)return 0;
    return 1;
}

int main()
{  
    int a=0;
    printf("Enter a number to check prime: ");
    scanf("%d",&a);
    if(isPrime(a))printf("Prime");
    else printf("Not Prime");
    return 0;
}