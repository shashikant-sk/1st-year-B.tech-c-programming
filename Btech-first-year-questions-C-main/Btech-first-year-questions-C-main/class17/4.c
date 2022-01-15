//Q4.WAP to swap two numbers using call by reference.
#include<stdio.h>

void swap(int*,int*);

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a=0,b=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swap: \n");
    printf("a = %d , b = %d \n",a,b);
    swap(&a,&b);
    printf("After swap: \n");
    printf("a = %d , b = %d \n",a,b);
    return 0;
}