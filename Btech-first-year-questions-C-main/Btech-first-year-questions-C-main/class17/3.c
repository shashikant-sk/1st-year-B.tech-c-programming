//Q3.WAP to add two numbers using pointers.
#include<stdio.h>

int main()
{
    int a=0,d=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&d);
    int *b = NULL,*c = NULL;//creation and initialisation
    b = &a;//assign
    c = &d;
    printf("%d + %d = %d",*b,*c,*b+*c);
    return 0;
}