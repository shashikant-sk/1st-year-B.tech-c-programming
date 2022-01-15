#include<stdio.h>

int main()
{
    //Q11.WAP input n numbers into an array and find out the sumation of all odd numbers.
    int n=0,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2)sum += a[i];
    }
    printf("Sum of all odd numbers = %d",sum);
    return 0;
}