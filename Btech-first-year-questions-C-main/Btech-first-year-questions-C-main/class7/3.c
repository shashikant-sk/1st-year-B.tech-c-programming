#include<stdio.h>

int main()
{
    //Q3. Program to find which number is greater among three numbers.
    int a=0,b=0,c=0;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)printf("%d is greatest.",a);
        else printf("%d is greatest.",c);
    }
    else
    {
        if(b>c)printf("%d is greatest.",b);
        else printf("%d is greatest.",c);
    }
    return 0;
}