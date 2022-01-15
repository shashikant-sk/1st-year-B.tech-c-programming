//Q7. WAP to compute the sum of all elements in an array using pointer.
#include<stdio.h>

int main()
{
    int a[100],*s = NULL,size=0,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter the array: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    s = a;
    for(int i=0;i<size;i++)sum+=*(s+i);
    printf("Sum of elements = %d",sum);
    return 0;
}