#include<stdio.h>

int main()
{
    //Q.7 WAP to swap two integer numbers using third variable.
    int a,b,c;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before interchange a = %d, b = %d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("After interchange a = %d, b = %d",a,b);
    return 0;
}