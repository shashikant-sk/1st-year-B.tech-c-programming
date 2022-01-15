#include<stdio.h>

int main()
{
    //Q4.WAP to print all odd numbers from a range.
    int a=0,b=0;
    printf("Give range: ");
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        if(a%2!=0)printf("%d \n",a);
        a++;
    }
    return 0;
}