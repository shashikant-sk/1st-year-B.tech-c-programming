//Q5. Write a program in C to print the array elements using recursion.
#include<stdio.h>

void printer(int[],int,int);

void printer(int a[],int n,int i)
{
    if(i>=n)return;
    printf("%d ",a[i]);
    printer(a,n,i+1);
}

int main()
{
    int size=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    printf("The array elements are: ");
    printer(a,size,0);
    return 0;
}