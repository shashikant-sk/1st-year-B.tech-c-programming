#include<stdio.h>

int main()
{
    //Q.10 WAP to swap two integer numbers without using third variable.    
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before interchange a = %d, b = %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After interchange a = %d, b = %d",a,b);
    return 0;
}