//Q 4. Write a Program to reverse the array elements in C Programming. 
#include<stdio.h>

int main()
{
    int size=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    for(int i=0,j=size-1;i<size/2;i++,j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("The inverted array is: ");
    for(int i=0;i<size;i++)printf("%d ",a[i]);
    return 0;
}