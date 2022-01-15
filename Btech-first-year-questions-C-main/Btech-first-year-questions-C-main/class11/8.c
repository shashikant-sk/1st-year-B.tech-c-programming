#include<stdio.h>

int main()
{
    //Q8.WAP input n numbers into an array and display it.
    int n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The array elements are: \n");
    for(int i=0;i<n;i++)
        printf("%d \n",a[i]);
    return 0;
}