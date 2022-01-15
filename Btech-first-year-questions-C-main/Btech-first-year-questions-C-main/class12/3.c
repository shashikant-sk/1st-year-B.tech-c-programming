//Q3. Write a Program to find the largest and smallest element in Array.
#include<stdio.h>

int main()
{
    int size=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    int max= a[0],min= a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
    }
    printf("Max = %d\nMin = %d",max,min);
    return 0;
}