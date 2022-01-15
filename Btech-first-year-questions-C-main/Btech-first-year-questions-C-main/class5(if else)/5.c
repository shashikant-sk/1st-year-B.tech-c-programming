#include<stdio.h>
int main()
{
    //Q5.WAP to input any three integers distinct and display the greater of three integers. 
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)printf("%d",a);
        else printf("%d",c);
    }
    else
    {
        if(b>c)printf("%d",b);
        else printf("%d",c);
    }
    return 0;
}