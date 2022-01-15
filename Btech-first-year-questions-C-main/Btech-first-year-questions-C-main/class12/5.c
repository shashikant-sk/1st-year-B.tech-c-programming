//Q5. Write a Program for deletion of an element from the specified location from Array.  
#include<stdio.h>

int main()
{
    int size=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    int del=0;
    printf("Enter index to delete: ");
    scanf("%d",&del);
    for(int i=del+1;i<size;i++)
    {
        a[i-1]=a[i];
    }
    size--;
    printf("The array after deleting the element: ");
    for(int i=0;i<size;i++)printf("%d ",a[i]);
    return 0;
}