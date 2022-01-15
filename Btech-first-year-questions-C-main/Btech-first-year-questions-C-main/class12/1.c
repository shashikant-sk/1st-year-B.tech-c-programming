//Q1. Write a Program to Search an element in array. 
#include<stdio.h>

int main()
{
    int size=0,n=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    printf("Enter the element to search: ");
    scanf("%d",&n);
    for(int i=0;i<size;i++)
        if(a[i]==n)
        {
            printf("Element found at position: %d\n",i+1);
            return 0;
        }
    printf("Element not found!!");
    return 0;
}