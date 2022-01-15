#include<stdio.h>
int main()
{
    //Q5.WAP to input any three integers distinct and display the greater of three integers. 
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",(a>b)?(a>c?a:c):(b>c?b:c));
    return 0;
}