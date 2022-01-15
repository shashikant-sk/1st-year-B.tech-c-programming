//Q6.  Write a program in C to get the largest element of an array using recursion
#include<stdio.h>

int max(int[],int,int);

int max(int a[],int n,int m)
{
    if(n<0)return m;
    if(a[n]>m)m=a[n];
    max(a,n-1,m);
}

int main()
{
    int size=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)scanf("%d",&a[i]);
    printf("The largest array element is : %d",max(a,size-1,a[0]));
    return 0;
}