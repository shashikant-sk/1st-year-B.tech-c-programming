// 7)WAP to swap 2 numbers by using call by value concept
#include<stdio.h>

int swap(int,int);
int swap(int a,int b)
{
    printf("The numbers before swapping are: \n");
    printf("a = %d , b = %d \n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("The numbers after swapping are: \n");
    printf("a = %d , b = %d",a,b);
}

int main()
{  
    int a=0,b=0;
    printf("Enter 2 numbers to swap: ");
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}