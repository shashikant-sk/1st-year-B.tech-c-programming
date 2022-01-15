#include<stdio.h>

int main()
{
    //Q6.WAP to multiply all odd numbers from a given range.
    int a=0,b=0,mul=1;
    printf("Give range: ");
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        if(a%2!=0)mul *= a;
        a++;
    }
    printf("The product of all odd numbers within the given range = %d",mul);
    return 0;
}