//Q1.WAP to create, initialize, assign and access a pointer variable.
#include<stdio.h>

int main()
{
    int a=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    int *b = NULL;//creation and initialisation
    b = &a;//assign
    printf("Showing the number using pointer: %d",*b);
    return 0;
}