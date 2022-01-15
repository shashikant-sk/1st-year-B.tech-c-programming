#include<stdio.h>

int main()
{
    //Q6.WAP to multiply all odd numbers from a given range.
    int a=0,b=0,mul=1;
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    do
    {
        if(a%2)mul *= a;
        a++;
    }while(a<=b);
    printf("Product of odd numbers = %d",mul);
    return 0;
}