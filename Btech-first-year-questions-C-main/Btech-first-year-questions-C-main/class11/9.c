#include<stdio.h>

int main()
{
    //Q9.WAP input n numbers into an array and display only even numbers from the array .
    int n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The even elements are: \n");
    for(int i=0;i<n;i++)
        if(a[i]%2==0)printf("%d \n",a[i]);
    return 0;
}