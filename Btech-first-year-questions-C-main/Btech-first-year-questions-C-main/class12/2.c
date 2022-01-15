//Q2. Write a Program to perform addition of all elements in Array.
#include<stdio.h>

int main()
{
    int size=0,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    for(int i=0;i<size;i++)sum+=a[i];
    printf("Sum = %d\n",sum);
    return 0;
}