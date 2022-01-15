//Q8. WAP to sort an array using Pointer.
#include<stdio.h>

void sort(int*,int);

void sort(int *a,int size)
{
    for(int i=0;i<size-1;i++)
        for(int j=0;j<size-i-1;j++)
            if (*(a+j) > *(a+j+1))
            {
                int temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
}

int main()
{
    int a[100],*s = NULL,size=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter the array: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    s = a;
    sort(s,size);
    printf("The sorted array(ascending): ");
    for(int i=0;i<size;i++)printf("%d ",a[i]);
    return 0;
}